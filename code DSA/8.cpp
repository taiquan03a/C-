//xau nhi phan doi xung
#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s; cin>>s;
    int n = s.size();
    s = " "+s;
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++) dp[i][i]=1;
    int ans=-1;
    for(int len =2;len <= n;len++){
        for(int i=1;i<=n-len+1;i++){
            int j = i + len -1;
            if(len==2 && s[i] == s[j]) dp[i][j]=1;
            else dp[i][j] = dp[i+1][j-1] && s[i]==s[j];
            //if(dp[i][j]) cout<<"YES"<<endl;
        }
    }
    int t; cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(dp[x][y]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}