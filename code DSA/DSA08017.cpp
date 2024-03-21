#include<bits/stdc++.h>

using namespace std;

void xuly(int n){
    queue<string> Q;
    Q.push("2");
    vector<string> kq;
    while(true){
        string tmp = Q.front();
        kq.push_back(tmp);
        Q.pop();
        if(tmp.length() <= n-1){
            Q.push(tmp + '1');
            Q.push(tmp + '0');
        }else break;
    }
    while(Q.size()){
        kq.push_back(Q.front());
        Q.pop();
    }
    for(int i=kq.size()-1;i>=0;i--){
        cout<<kq[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        xuly(n);
    }
}