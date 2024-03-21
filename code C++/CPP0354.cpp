#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int j=0;
        for(int i=0;i<s.length();i++){
            if(i==j){
                int cnt=0;
                while(s[i]==s[j]){
                    cnt++;
                    j++;
                }
                cout<<s[i]<<cnt;
            }
        }
        cout<<endl;
    }
}