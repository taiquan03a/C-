#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        s = " " + s;
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i = n-1;i>=1;i--){
            for(int j=i+1;j<=n;j++){
                if(s[i] == s[j]) dp[i][j] = dp[i+1][j-1];
                else dp[i][j] = min(dp[i+1][j]+1, dp[i][j-1]+1);
            }
        }
        cout<<dp[1][n]<<endl;
    }
}