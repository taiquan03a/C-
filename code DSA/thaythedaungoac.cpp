#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int n = s.length();
        stack<int> st;
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if(!st.empty() && s[i]==')'){
                    s[st.top()] = '0';
                    st.pop();
                    s[i] = '1';
                }
                else if(st.empty() && s[i]== ')'){
                    s[i]='2';
                }
            }
        }
        while(!st.empty()){
            s[st.top()] = '2';
            st.pop();
        }
        for(int i=0;i<n;i++){
            if(s[i]=='2') cout<<-1;
            else cout<<s[i];
        }
        cout<<endl;
    }
}