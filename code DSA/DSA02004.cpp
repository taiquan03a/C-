#include<bits/stdc++.h>

using namespace std;
int n, a[10][10];
int ok=1;
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};

char xuly(int k){
	string s = "DLRU";
	return s[k];
}
void Try(int i,int j, string s){
	
	if(i==n && j==n){
		cout<<s<<" ";
		ok = 0;
	}
	a[i][j]=0;
	for(int k=0; k<4 ;k++){
		int i1 = i+dx[k];
		int j1 = j + dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]){
			Try(i1,j1,s+xuly(k));
		}
	}
	a[i][j] = 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				cin>>a[i][j];
			}
		}
		string s ="";
		if(a[1][1] == 0) cout<<"-1";
		else{
			Try(1,1,s);
			if(ok) cout<<"-1";
		}
		
		cout<<endl;
		ok=1;
	}
}
