#include<bits/stdc++.h>

using namespace std;

int check = 0,n;
int dx[8] = {0, -1, 0, 1};
int dy[8] = {-1, 0, 1, 0};
int a[5005][5005];


void DFS(int i,int j){
    a[i][j] = 1;
    check++;
    for(int k=0;k<4;k++){
        int xi = i + dx[k];
        int yi = j + dy[k];
        if(xi>=1 && xi<=n && yi>=1 && yi<=n && a[xi][yi]==0){
            a[xi][yi] = 1;
            DFS(xi,yi);
        }
    }
}

int main(){
    cin>>n;
    int cnt=0;
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= n; j++){
            cin>>a[i][j];
            if(a[i][j] == 0){
                cnt++;
            }            
        }
    }
    int tmp = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==0) {
                DFS(i,j);
                tmp++;
            }
        }
    }
    if(tmp != 1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}