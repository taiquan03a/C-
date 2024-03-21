#include<bits/stdc++.h>

using namespace std;
bool visited[1005];
int parent[1005];
vector<int> ke[1005];
int ok = 0;
void DFS(int u){
    if(ok) return;
    visited[u] = true;
    for(auto y:ke[u]){
        if(visited[y] && y  != parent[u]){
            ok = 1;
            return;
        }else if(!visited[y]){
            parent[y] = u;
            DFS(y);
        }
    }
}

int tplt(int n){
    int cnt = 0;
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
            DFS(i);
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int t; cin>>t;
    while(t--){
        int v,e,x,y;
        cin>>v>>e;    
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=1005;i++) {
            ke[i].clear();
            parent[i]  = 0;
        }
        while(e--){
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        for(int i = 1;i <= v && !ok;i++){
            if(!visited[i]){
                DFS(i);
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        ok = 0;
    }
}