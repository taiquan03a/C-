//day con lap dai nhat
#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s;
        cin>>s;
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        int max_len = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1] == s[j-1]&& i != j){
                    dp[i][j] = dp[i-1][j-1]+1;
                
                }else dp[i][j] =max(dp[i][j-1],dp[i-1][j]);
            }
        }
        cout<<dp[n][n]<<endl;
    }
}