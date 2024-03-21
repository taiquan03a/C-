#include<bits/stdc++.h>

using namespace std;
int n,m;
int a[505][505];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {1,0,-1,-1,1,-1,0,1};

void DFS(int i,int j){
    a[i][j] = 0;
    for(int k=0;k<8;k++){
        int xi = i + dx[k];
        int yi = j + dy[k];
        if(xi>=1 && xi<=n && yi>=1 && yi<=m &&a[xi][yi]==1){
            a[xi][yi] = 0;
            DFS(xi,yi);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j] == 1){
                    DFS(i,j);
                    cnt++;
                }
            }
        }
        // for(int i=1;i<=n;i++){
        //     cout<<a[i]<<endl;
        // }
        cout<<cnt<<endl;
    }
}

// -1 ,1
// -1 ,0
// -1 ,-1
// 0 ,-1
// 0 ,1
// 1 ,-1
// 1 ,0
// 1 ,1