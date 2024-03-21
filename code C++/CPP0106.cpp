#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
    int res=0;
    long long cnt=0;
    long long a=n;
    while(n>0){
        res=n%10;
        cnt=cnt*10+res;
        n/=10;
    }
    if(a==cnt) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}