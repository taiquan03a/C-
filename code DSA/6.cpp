//tong cac thua so nguyen to lon nhat
#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;
int nt[100005], maxx[100005];
int l, r;

int sang(int n){
    int res=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            res=i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1) res=n;
    return res; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>l>>r;
        long long maximun = 0;
        for(int i=l;i<=r;i++) maximun += sang(i);
        cout<<maximun<<endl;
    }
}