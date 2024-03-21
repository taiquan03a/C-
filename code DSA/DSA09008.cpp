#include<bits/stdc++.h>

using namespace std;

bool visited[1005];
vector<int> ke[1005];
void DFS(int u){
    visited[u] = true;
    for(auto v:ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
int tplt(int n){
    int count = 0;
    for(int i = 1;i <= n; i++){
        if(!visited[i]){
            count++;
            DFS(i);
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=1005;i++) ke[i].clear();
        int v,e;
        cin>>v>>e;
        int x,y;
        while(e--){
            cin>>x>>y;
            ke[x].push_back(y);
            //ke[y].push_back(x);
        }
        cout<<tplt(v)<<endl;
    }
}