#include<bits/stdc++.h>

using namespace std;
int D[1001][1001];
int main(){
    int n,m,u,v,w;
    cin>>n>>n;
    // for(int i = 1;i <= n;i++){
    //     for(int j = 1;j <= m;j++){
    //         D[i][j] = 0;
    //     }
    // }
    while(m--){
        cin>>u>>v>>w;
        D[u][v] = D[v][u] = w;
    }
    for(int k = 1;k <= n;k++){
        for(int i = 1;i <= n;i++){
            for(int j = 1;j <= n;j++){
                if(D[i][j] > D[i][k] + D[k][j]){
                    D[i][j] = D[i][k] + D[k][j];
                }
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        cin>>u>>v;
        cout<<D[u][v]<<endl;
    }
}