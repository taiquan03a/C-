#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char s;
        cin>>s;
        if(s>='a' && s<='z') s=s-32;
        else s=s+32;
        cout<<s<<endl;
    }
}