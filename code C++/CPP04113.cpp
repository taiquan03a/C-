#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[2*n]={0},c[2*n]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            b[i*2+1]=a[i];
        }
        reverse(a,a+n);
        for(int i=0;i<n;i++){
            c[i*2]=a[i];
        }
        
        //if(n%2==0){
            for(int i=0;i<n;i++){
                if(i%2==0) cout<<c[i]<<" ";
                else cout<<b[i]<<" ";
            }
        //}
    }
}