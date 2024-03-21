#include<bits/stdc++.h>

using namespace std;

int check(string s){
    long long sum=0;
    for(int i=0;i<s.length();i++){
        sum+= s[i]-'0';
    }
    if(sum<10) return sum;
    return check(to_string(sum));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s) == 9) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}