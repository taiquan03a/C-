#include<bits/stdc++.h>

using namespace std;
long long gcd (long long n1, long long n2) {
    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
}
long long BCNN(long long a, long long b){
    return (a*b/gcd(a,b) );
}
long long BCNN_Mang(long long n){
        long long temp=1;
        for(int i=2;i<=n;i++){
            temp = BCNN(temp, i);    
        }
        return temp;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<BCNN_Mang(n)<<endl;
    }
}