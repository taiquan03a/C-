#include<bits/stdc++.h>

using namespace std;
int n,m;
vector<int> adj[1005];
vector<pair<int,int>> edge;
bool visited[1005];

void DFS(int u,int s,int t){
    visited[u] = true;
    for(auto v : adj[u]){
        if(u == s && v == t || u == t && v == s){
            continue;
        }
        if(!visited[v]){
            DFS(v,s,t);
        }
   } 
}
int tplt(int s,int t){
    int count = 0;
    for(int i = 1;i <= n; i++){
        if(!visited[i]){
            count++;
            DFS(i,s,t);
        }
    }
    return count;
}

void canh_cau(){
    int cc = tplt(0,0);
    for(auto e:edge){
        int s = e.first,t = e.second;
        memset(visited,false,sizeof(visited));
        //visited[e] = true;
        if(cc < tplt(s,t)){
            cout<<s<<' '<<t<<' ';
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++) {
            adj[i].clear();
        }
        edge.clear();
        memset(visited,false,sizeof(visited));
        int x,y;        
        while(m--){
 
            cin>>x>>y;
            edge.push_back(make_pair(x,y));
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        canh_cau();
        cout<<endl;
    }
}