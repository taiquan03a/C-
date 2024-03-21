#include<bits/stdc++.h>

using namespace std;

int n,m,cnt=0;
int a[105][105];
int dx[] = {1, 0};
int dy[] = {0 , 1};
void ql(int i,int j){
	if(i==n && j==m) cnt++;
	for(int k=0;k<2;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=m){
			ql(i1,j1);
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
		ql(1,1);
		cout<<cnt<<endl;
		cnt=0;
	}
}
