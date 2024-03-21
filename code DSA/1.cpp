#include<bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {1, 0, -1, -1, 1, -1, 0, 1};
bool visited[30001][30005];
int a[5005][5005];
int check = 0;

void DFS(int i,int j,int n){
    a[i][j] = true;
    for(int k=0;k<8;k++){
        int xi = i + dx[k];
        int yi = j + dy[k];
        if(xi>=1 && xi<=n && yi>=1 && yi<=n && a[xi][yi]==0){
            a[xi][yi] = 1;
            check++;
            DFS(xi,yi,n);
        }
    }
}

int main(){
    int n,cnt=0; cin>>n;
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= n; j++){
            cin>>a[i][j];
            if(a[i][j] == 1) cnt++;
        }
    }
    int tmp = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==0) {
                DFS(i,j,n);
                tmp++;
            }
        }
    }
    if(check == cnt) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
