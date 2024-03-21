#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;        
        int a[n+1][m+1],dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i = 1;i <= n;i++){
            for(int j=1;j <= m;j++){
                cin>>a[i][j];
            }
        }
        //dp[0][0] = 1001;
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j])
                    dp[i][j] = min(dp[i-1][j-1]+a[i][j],min(dp[i][j-1] + a[i][j] ,dp[i-1][j] + a[i][j]));
                    ans = max(ans,dp[i][j]);
            }
        }
        cout<<ans<<endl;
    }
}