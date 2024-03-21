#include<bits/stdc++.h>

using namespace std;
string s;
int k;
int x[101];
vector<string> v;
set<int> se;
void hien_thi(){
    
    for(int i=0;i<k;i++){
        cout<<s[x[i]];
    }
    cout<<endl;
}
void Try(int i){
    for(int j=i; j < s.length(); j++){
        x[i]=j;
        if(i==(k-1)) hien_thi();
        else Try(i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>s>>k;
        Try(0);
    }
}
