#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int j=0,k=0;
        long long a[n],b[n]={0},c[n]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                c[j]=a[i];
                j++;
            }else{
                b[k]=a[i];
                k++;
            }
        }
        
        for(int j2=0;j2<k;j2++) {
            cout<<b[j2]<<" ";
        }
        for(int k2=0;k2<j;k2++) {
            cout<<c[k2]<<" ";
        }
        cout<<endl;
    }
}