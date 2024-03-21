#include<bits/stdc++.h>

using namespace std;

vector<int>adj[1005];
bool visited[1005];
vector<int> cycle;
int ok=0;
int DFS(int u){
    cycle.push_back(u);
    visited[u] = true;
    for(auto v : adj[u]){
        if(u!=*adj[1].begin() && v == 1) {
            cycle.push_back(1);
            ok = 1;
            return 1;
        }
        else if(v != 1 && !visited[v]){
            visited[v] = true;
            DFS(v);
        }
        if(ok) return 1;
        
    }
    return 0;
}
int main(){
    int t; cin>>t;
    while(t--){
        memset(visited,false,sizeof(visited));
        cycle.clear();
        for(int i=1;i<=1005;i++) adj[i].clear();
        int n,m;
        cin>>n>>m;
        int x,y;
        while(m--){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        if(DFS(1)) for(auto it:cycle) cout<<it<<' ';
        else cout<<"NO";
        cout<<endl;
        ok = 0;
    }
}