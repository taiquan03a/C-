#include<bits/stdc++.h>
using namespace std;
int check(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
int main(){
    long long n;
    cin>>n;
    if(check(n)) cout<<"YES";
    else cout<<"NO";
}