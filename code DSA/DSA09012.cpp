#include<bits/stdc++.h>

using namespace std;
int n,m;
vector<int> adj[1005];
bool visited[1005];

void DFS(int u){
   visited[u] = true;
   for(auto v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
   } 
}
int tplt(){
    int count = 0;
    for(int i = 1;i <= n; i++){
        if(!visited[i]){
            count++;
            DFS(i);
        }
    }
    return count;
}

void dinh_tru(){
    int cc = tplt();
    for(int i = 1;i <= n;i++){
        memset(visited,false,sizeof(visited));
        visited[i] = true;
        if(cc < tplt()){
            cout<<i<<' ';
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        for(int i=1;i<=1005;i++) adj[i].clear();
        memset(visited,false,sizeof(visited));
        cin>>n>>m;
        while(m--){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dinh_tru();
        cout<<endl;
    }
}