#include<bits/stdc++.h>

using namespace std;
vector<int> adj[100005];
bool visited[100005];
int cnt;
void DFS(int u){
    cnt++;
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            visited[v] = true;
            DFS(v);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=1005;i++) adj[i].clear();
        int n,m;
        cin>>n>>m;
        int x,y;
        while(m--){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int res=0;
        for(int i = 1;i <= n;i++){
            if(!visited[i]){
                cnt=0;
                DFS(i);
                res = max(res,cnt);
            }
        }
        cout<<res<<endl;
    }
}