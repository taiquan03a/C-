#include<bits/stdc++.h>

using namespace std;
int tong(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum<10) return sum;
    else return tong(sum);
}

// int check(long long n){
//     int sum=0;
//     if(n<10) return n;
//     else{
//         while(n>0){
//             int a=n%10;
//             sum+=a;
//             n/=10;
//             if(sum<10) return sum;
//             else{
//                 while(sum<0){

//                 }
//             }
//         }
//     }
// }
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<tong(n)<<endl;
    }
}