#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=0,res=1;
    for(int i=1;i<=n;i++){
        res*=i;
        sum+=res;
    }
    cout<<sum;
}