#include<bits/stdc++.h>

using namespace std;
bool visited[1005];
vector<int> adj[1005];
int a[100][100],n;
void DFS(int u){
    visited[u] = true;
    cout<<u<<' ';
    for(auto v:adj[u]){
        if(!visited[v]) DFS(v);
    }
}
void dfs(int u){
    stack<int> st;
    st.push(u);
    visited[u] = true;
    int s=0;
    while(!st.empty()){
        s = st.top();
        //cout<<s<<" ";
        st.pop();
        for(int v = 1;v <= n;v++){
            if(!visited[v] && a[u][v]){
                cout<<v<<' ';
                visited[v] = true;
                st.push(s);
                st.push(v);
                break;
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int x,y;
    memset(visited,false,sizeof(visited));
    // while(m--){
    //     cin>>x>>y;
    //     adj[x].push_back(y);
    //     adj[y].push_back(x);
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    dfs(1);
}