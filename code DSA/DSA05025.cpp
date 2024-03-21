#include<bits/stdc++.h>

using namespace std;
long long dp[101];
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		dp[0]=1;
		dp[1]=1;
		dp[2]=2;
		dp[3]=3;
		for(int i=3;i<=n;i++){
			dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
		}
		cout<<dp[n]<<endl;
	}
}
