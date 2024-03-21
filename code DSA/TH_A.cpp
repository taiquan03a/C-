#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

typedef pair<int, int> pii;

vector<int> dijkstra(vector<vector<pii>>& graph, int start) {
    int n = graph.size();
    vector<int> cost(n, INT_MAX);
    cost[start] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        int current_cost = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (current_cost > cost[node])
            continue;

        for (const auto& neighbor : graph[node]) {
            int neighbor_node = neighbor.first;
            int edge_cost = neighbor.second;
            int new_cost = current_cost + edge_cost;
            if (new_cost < cost[neighbor_node]) {
                cost[neighbor_node] = new_cost;
                pq.push({new_cost, neighbor_node});
            }
        }
    }

    return cost;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<pii>> graph(n + 1);

    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int shop;
    cin >> shop;

    vector<int> costs = dijkstra(graph, shop);

    for (int i = 1; i <= n; ++i) {
        cout << costs[i] << " ";
    }

    return 0;
}