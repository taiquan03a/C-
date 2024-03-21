#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        sort(a,a+n);
        int tmp=a[n-1]-a[0]+1;
        int cnt=tmp-s.size();
        cout<<cnt<<endl;
    }
}