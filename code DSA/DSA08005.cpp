#include<bits/stdc++.h>

using namespace std;
void nhiphan(int n){
    queue<string> Q;
    Q.push("2");
    while(n--){
        string s = Q.front();
        cout<<s<<" "; Q.pop();
        Q.push(s + "2");
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='2') cnt++;
        }
        if(cnt>s.size()/2){
            Q.push(s + "1");
            Q.push(s + "0");
        }
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        nhiphan(n);
    }
}