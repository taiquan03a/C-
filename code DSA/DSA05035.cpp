#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int dp[n+1],a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=k;j>=1;j--){
                if(a[i] <= j){
                    dp[j] = dp[j] || dp[j - a[i]];
                }
            }
        }
        if(dp[k]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}