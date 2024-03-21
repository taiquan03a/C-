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
        int F[n+1];
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int F1[n],F2[n];
        memset(F1,0,sizeof(F1));
        memset(F2,0,sizeof(F2));
        for(int i=1;i<=n;i++){
            F1[i]=a[i];
            F2[n-i] = a[n-i];
            for(int j=1;j<i;j++){
                if(a[i] > a[j]){
                    F1[i]=max(F1[i],F1[j]+a[i]);
                }
            }
            for(int j = n;j>i;j--){
                if(a[i] > a[j]) F2[n-i] = max(F2[n-i],F2[j] + a[i]);
            }
        }
        // for(int i=n-1;i>=0;i--){
        //     F2[i] = a[i];
        //     for(int j = n-1;j>i;j--){
        //         if(a[i] > a[j]){
        //             F2[i] = max(F2[i],F2[j] + a[i]);
        //             }
        //         }
        // }
        F[0] = -1;
        for(int i=1;i<=n;i++){
            F[i] = max(F[i-1],F1[i] + F2[i] - a[i]);
            }
        cout<<*max_element(F+1,F+n+1)<<endl;
        }
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
