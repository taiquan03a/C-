#include<bits/stdc++.h>
using namespace std;

int n,m,u;
bool check[10005]; 
vector<int> adj[10005];
vector<pair<int, int>> T;
void Tree_BFS(int u){
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(auto v:adj[u]){
			if(!check[v]){
				T.push_back({u, v});
				q.push(v);
				check[v] = true;
			}
		}
	}
}
int main(){ 
    int t; cin>>t;
    while(t--){
        memset(check,false,sizeof(check));
        for(int i=1;i<=10005;i++) {
            adj[i].clear();
        }
        T.clear();
        cin>>n>>m>>u;
        int x,y;
        while(m--){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        } 
        Tree_BFS(u);
        if(T.size() < n-1) cout<<"-1"<<endl;
        else {
            for(auto it:T){
                cout<<it.first<<' '<<it.second<<endl;
            }
        }
    }
}
// 13
// 0 1 1 1 0 0 0 0 0 0 0 0 0
// 1 0 1 1 0 0 0 0 0 0 0 0 0
// 1 1 0 1 1 0 0 0 0 0 0 0 0
// 1 1 1 0 0 0 0 0 0 0 0 0 0
// 0 0 1 0 0 1 1 1 1 0 0 0 0
// 0 0 0 0 1 0 1 0 1 0 0 0 0
// 0 0 0 0 1 1 0 1 0 0 0 0 0
// 0 0 0 0 1 0 1 0 0 0 0 0 0
// 0 0 0 0 1 1 0 1 0 1 0 0 0
// 0 0 0 0 0 0 0 0 1 0 1 1 1
// 0 0 0 0 0 0 0 0 0 1 0 1 1
// 0 0 0 0 0 0 0 0 0 1 1 0 1
// 0 0 0 0 0 0 0 0 0 1 1 1 0