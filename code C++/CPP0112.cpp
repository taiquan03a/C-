#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double xA,yA,xB,yB;
        cin>>xA>>yA>>xB>>yB;
        double kc;
        kc = sqrt(pow(xB-xA,2) + pow(yB-yA,2));
        cout<<fixed<<setprecision(4)<<kc<<endl;
    }
}