#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int F[n];
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int F1[n],F2[n];
        memset(F1,0,sizeof(F1));
        memset(F2,0,sizeof(F2));
        F1[0] = F2[n-1] =1;
        for(int i=1;i<n;i++){
            if(a[i] > a[i-1]) F1[i] = F1[i-1] + 1;
            else F1[i] =1;
        } 
        for(int i = n-2; i>=0;i--){
            if(a[i] > a[i+1]) F2[i] = F2[i+1] +1;
            else F2[i] = 1;
        }
        int ans = -1;
        for(int i=0;i<n;i++){
            ans = max(ans,F1[i] + F2[i] -1);
        }
        cout<<ans<<endl;
    }
}
