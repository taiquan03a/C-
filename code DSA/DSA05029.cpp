#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void dfs(vector<vector<int>>& graph, vector<bool>& visited, int start) {
    stack<int> s;
    s.push(start);
    visited[start] = true;
    while (!s.empty()) {
        int curr = s.top();
        s.pop();
        cout << curr << " ";
        for (int neighbor : graph[curr]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                s.push(curr);
                s.push(neighbor);
                break;
            }
        }
    }
}
void dfs(int u){
    stack<int> s;
    s.push(u);
    int cur = s.top();
    s.pop();
    visited[u]=true;
    for(int v:graph[u]){
        if(!visited[v]){
            visited[v]=true;
            s.push(cur);
            s.push(v);
            break;
        }
    }
}
int main() {
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    return 0;
}
