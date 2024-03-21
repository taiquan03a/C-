#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=s.length();
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(s[j]==s[i]) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}