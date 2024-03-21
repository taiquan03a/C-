#include<bits/stdc++.h>
using namespace std;
bool visited[1005];
vector<int> adj[1005];
void BFS(int u){
    queue<int> Q;
    Q.push(u);
    visited[u] = true;
    while(!Q.empty()){
        int x = Q.front();
        cout<<x<<' ';
        Q.pop();
        for(auto v : adj[x]){
            if(!visited[v]){
                Q.push(v);
                visited[v] = true;
            }
        }
    }
}

int main(){
    int n,m,x,y;
    cin>>n>>m;
    while(m--){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    BFS(1);
}