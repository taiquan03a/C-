#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> s;
        long long a[n],b[m];
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            s.push_back(b[i]);
        }
        sort(s.begin(),s.end());
        for(auto x : s){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}