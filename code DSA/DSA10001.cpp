#include<bits/stdc++.h>

using namespace std;
int n,m;
char a[505][505];
int dx[8] = {0, -1, 0, 1};
int dy[8] = {-1, 0, 1, 0};

void DFS(int i,int j){
    a[i][j] = '*';
    for(int k=0;k<4;k++){
        int xi = i + dx[k];
        int yi = j + dy[k];
        if(xi>=1 && xi<=n && yi>=1 && yi<=m &&a[xi][yi]=='.'){
            a[xi][yi] = '*';
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
        for(int i = 1;i <=n;i++){
            if(a[1][i] == 'S') DFS(1,i);
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