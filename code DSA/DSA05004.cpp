#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int F[n];
    for(int i=0;i<n;i++){
        F[i]=1;
        for(int j=0;j<i;j++){
            if(a[j] == a[i]) F[i]=max(F[i],F[j]+1);
        }
    } 
    cout<<*max_element(F,F+n)<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}