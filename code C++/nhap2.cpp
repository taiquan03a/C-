#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    vector<double> v;
    while(t--){
        int x,y;
        cin>>x>>y;
        double kc = (double)(sqrt(pow(x,2) + pow(y,2)));
        v.push_back(kc);
    }
    for(auto it:v) cout<<fixed<<setprecision(2)<<it<<' ';
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
