#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    long long x,y;
    vector<pair<long long,long long>> v;
    while(n--){
        cin>>x>>y;
        v.push_back({x,y});
    }
    int dp[v.size()+5];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<v.size();i++){
        if(v[i].first>v[i-1].first && v[i].second>v[i-1].second) dp[i] = dp[i-1] +1;
        else{
            if(((v[i].first==v[i-1].first || v[i].second==v[i-1].second) && v[i]>v[i-1]) ||(abs(v[i].first) > abs(v[i-1].first) && abs(v[i].second) > abs(v[i-1].second))){
                swap(v[i],v[i-1]);
            }
            dp[i] = dp[i-1];
        } 
    }
    cout<<dp[v.size()-1]<<endl;
}