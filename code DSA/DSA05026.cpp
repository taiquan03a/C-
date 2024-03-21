#include<bits/stdc++.h>

using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    bool dp[s+1];
    memset(dp,false,sizeof(dp));
    dp[0] = true;
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=1;j--){
            if(a[i] <= j) dp[j] = dp[j] || dp[j - a[i]];
            if(dp[j]) ans = max(ans,j);
        }
    }
    cout<<ans<<endl;
}