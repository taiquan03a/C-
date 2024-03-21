#include<bits/stdc++.h>

using namespace std;

int maxn = 1e9;
#define pii pair<int,int>
int n,m;
vector<pii> adj[10005];

int dijkstra(int s,int t){
    vector<int> dist(n+1,INT_MAX);
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push({0,s});
    dist[s] = 0;
    while(!pq.empty()){
        pii u = pq.top();
        pq.pop();
        if(u.first > dist[u.second]){
            continue;
        }
        for(auto v:adj[u.second]){
            if(dist[v.first] > max(dist[u.second], v.second)){
                dist[v.first] = max(dist[u.second], v.second);
                pq.push({dist[v.first],v.first});
            }
        }
    }
    return dist[t];
}

int main(){
    ios_base::sync_with_stdio(false);
    int q;
    cin>>n>>m>>q;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        //adj[v].push_back({u,w});
    }
    while(q--){
        int s,t;
        cin>>s>>t;
        int ans = dijkstra(s,t);
        if(ans == INT_MAX) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}