#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> List(1010);
int daxet[1010];

void BFS(int u){
    queue<int> Q;
    Q.push(u);
    daxet[u]=1;
    while(!Q.empty()){
        int x = Q.front();
        Q.pop();
        cout<<x<<" ";
        for(int i: List[x]){
            if(!daxet[i]){
                daxet[i] = 1; Q.push(i);
            }
        }
    }
    cout<<endl;
}
main(){
    int t;
    cin>>t;
    while(t--){
        memset(daxet,0,sizeof(daxet));
        int n,m,u,i,x,y;
        for(i=0;i<1010;i++) List[i].clear();
        cin>>n>>m>>u;
        for(i=1;i<=m;i++){
            cin>>x>>y;
            List[x].push_back(y);
            //List[y].push_back(x);
        }
        BFS(u);
    }
}
