#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int dp[n+1][k+1];
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for(int i=1;i<=n;i++){
            for(int j=k;j>=0;j--){
                if(a[i] <= j)
                    dp[i][j] = dp[i-1][j] || dp[i][j-a[i]];
            }
        }
        if(dp[n][k]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}