#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int F[n+1]={0};
        for(int i=1;i<=n;i++){
            F[i]=a[i];
            for(int j=1;j<i;j++){
                if(a[j] < a[i]) F[i]=max(F[i],F[j]+a[i]);
            }
        }
        cout<<*max_element(F,F+n+1)<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}