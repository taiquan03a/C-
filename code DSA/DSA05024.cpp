#include<bits/stdc++.h>

using namespace std;
long long dp[100005], a[100005];
int mod=1e9+7;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i = 1;i <= k;i++){
            for(int j=1;j<=n;j++){
                if( i >= a[j]) {
                    dp[i] = dp[i] + dp[i-a[j]];
                    dp[i]%=mod;
                }
            }
        }
        cout<<dp[k]<<endl;
    }
}