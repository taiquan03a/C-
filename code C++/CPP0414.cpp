#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int> v;
        for(int i=0;i<n;i++){
            while(a[i]>0){
                v.insert(a[i]%10);
                a[i]/=10;
            }
        }
        for(int x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}