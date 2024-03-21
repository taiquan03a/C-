#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++)cin>>b[i];
        int max=0;
        for(int i=0;i<n;i++){
            int sum_a=0,sum_b=0,k=0;
            for(int j=i;j<n;j++){
                sum_a+=a[j];
                sum_b+=b[j];
                if(sum_a == sum_b){
                    k=j-i+1;
                    if(k>max) max=k;
                }
            }
        }
        cout<<max<<endl;
    }
}