#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<long long>> dp(n + 5, vector<long long>(m + 5, 1));
//        memset(dp,1,sizeof(dp));
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
//               if(i == n && j == m) dp[i][j] = 1;
//             else {
                    dp[i][j] = dp[i][j+1] + dp[i+1][j];
                    // if(i==0 && j==m || i==n&&j==0) {
                    //     dp[0][0] += dp[i][j];
                    //     break;
                    // }
                    
                }
//            }
        }
        cout<<dp[0][0]<<endl;
    }
}