#include<bits/stdc++.h>

using namespace std;
bool check(long long n){
        
        int tmp1 = n%10;
        if(tmp1 != 6) {
            return false;
        }
        n/=10;
        int tmp2 = n%10;
        if(tmp2 != 8) {
            return false;
        }
        return true;    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(check(n)) cout<<"1"<<endl;
        else cout<<"0"<<endl;

    }
}