#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n = a.size();
        int m = b.size();
        a = " "+a;
        b = " "+b;
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++) dp[i][0] =i;
        for(int j=0;j<=m;j++) dp[0][j]=j;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i] != b[j]){
                    dp[i][j] = min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+1});
                }else dp[i][j] = dp[i-1][j-1];
            }
        }
        cout<<dp[n][m]<<endl;
    }
}