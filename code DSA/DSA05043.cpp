#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n = s.length();
        s = " " + s;
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        int ans = 0;
        for(int i=1;i<=n;i++) dp[i][i] =1;
        for(int len = 2;len <= n;len++){
            for(int i=1;i<=n-len+1;i++){
                int j = i + len - 1;
                if(len == 2 && s[i] == s[j]) dp[i][j] = 1;
                else dp[i][j] = dp[i+1][j-1] && s[i] == s[j]; 
                if(dp[i][j]) ans = max(ans,len);
            }
        }
        cout<<ans<<endl;
    }
}