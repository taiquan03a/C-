#include<bits/stdc++.h>

using namespace std;
int dp[105][105][105];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,h;
		cin>>n>>m>>h;
		string s,t,y;
		cin>>s>>t>>y;
		s=" "+s; t=" " + t; y=" "+y;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				for(int k=1;k<=h;k++){
					if(s[i] == t[j] && t[j] == y[k]){
						dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
					}else dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));
				}
			}
		}
		cout<<dp[n][m][h]<<endl;
	}
}
