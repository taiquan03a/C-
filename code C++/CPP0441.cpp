#include<bits/stdc++.h>

using namespace std;
int check(int a[],int n,int x){
    for(int i=0;i<n;i++){
            if(a[i]==x){
                return i+1;
            }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<check(a,n,x)<<endl;
    }
}