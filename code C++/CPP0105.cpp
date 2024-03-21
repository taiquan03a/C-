#include<bits/stdc++.h>
using namespace std;
bool check(long n){
    int res=0;
        while(n>0){
            res=n%10;
            if(res!=0 && res!=6 && res!=8){
                return false;
            }
            n/=10;
        }
        return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        if(check(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}