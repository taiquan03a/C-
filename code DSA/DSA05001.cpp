#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		int n = s.length();
		int m = t.length();
		int dp[1001][1001];
		s = " "+s;
		t = " " + t;
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= m;j++){
				if(s[i] == t[j]) dp[i][j] = dp[i-1][j-1] + 1;
				else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
		cout<<dp[n][m]<<endl;
	}
}
