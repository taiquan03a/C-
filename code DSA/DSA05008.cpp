#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n+1];
		int	dp[205][40005];
		for(int i = 1; i <= n;i++) cin>>a[i];
		dp[0][0]=1;
		for(int i=1;i<=n ;i++){
			dp[i][0]=1;
			for(int j=1;j<=s;j++){
				if(a[i] <= j) dp[i][j] = dp[i-1][j] + dp[i-1][j - a[i]];
				else dp[i][j] = dp[i-1][j];
			}
		}
		if(dp[n][s] != 0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

