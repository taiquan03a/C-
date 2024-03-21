#include<bits/stdc++.h>

using namespace std;
#define pii pair<int,int>
vector<pair<int,int>> adj[500505];
int n;
void Dijkstra(int u){
    priority_queue<pii,vector<pii>,greater<pii>> q;
    q.push({0,u});
    vector<int> d(n+1);
    for(int i=1;i<=n;i++){
        d[i] = INT_MAX;
    }
    d[u] = 0;
    pii p;
    int dis=0,s=0,t=0,w=0;
    while(q.size()){
        p = q.top();
        q.pop();
        //dis = p.first;
        //s = p.second;
        if(p.first <= d[p.second]) {
        for(auto &e:adj[p.second]){
            //t = e.first;
            //w = e.second;
            if(d[e.first] > d[p.second] + e.second){
                d[e.first] = d[p.second] + e.second;
                q.push({d[e.first],e.first});
            }
        }
        }
    }
    for(int i = 1;i <= n;i++){
        cout<<d[i]<<' ';
    }
    cout<<endl;
}

main(){
    int t; cin>>t;
    while(t--){
        int m,u;
        cin>>n>>m>>u;
        int x,y,w;
        while(m--){
            cin>>x>>y>>w;
            adj[x].push_back({y,w});
            adj[y].push_back({x,w});
        }
        Dijkstra(u);
    }
}