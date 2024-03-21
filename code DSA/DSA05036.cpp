#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        double a[n+1],b[n+1];
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            cin>>b[i];
        }
 //       for(int i=1;i<=n;i++) cin>>b[i];
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++){
            dp[i]=1;
            for(int j=1;j<i;j++){
                if(a[i] > a[j] && b[i] < b[j]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        cout<<*max_element(dp+1,dp+n+1)<<endl;
    }
}