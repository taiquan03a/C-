#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int sum_l=0,sum_r=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        int ok=1;
        for(int i=1;i<n;i++){
            sum_l+=a[i-1];
            sum_r=sum - sum_l - a[i];
            if(sum_l == sum_r){
                cout<<i+1<<endl;
                ok=0;
                break;
            }
        }
        if(ok) cout<<"-1"<<endl;
    }
}