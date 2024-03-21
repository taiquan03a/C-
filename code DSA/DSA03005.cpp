#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int dau=0,cuoi=0;
        if(k <= n/2){
            for(int i=0;i<n;i++){
                if(i<k) dau+=a[i];
                else cuoi+=a[i];
            }
        }else{
            for(int i=0;i<n;i++){
                if(i<(n-k)) dau+=a[i];
                else cuoi+=a[i];
            }
        }
        cout<<cuoi-dau<<endl;
    }
}