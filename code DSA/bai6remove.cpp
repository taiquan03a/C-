#include<bits/stdc++.h>

using namespace std;

string xuly(string s,int k){
    stack<int> st;
    int n =s.length();
    int d[n]={0};
    for(int i=0;i<n;i++){
        if(!st.empty() && s[i] == s[st.top()]) d[i] = d[st.top()]+1;
        else d[i]=1;
        st.push(i);
        if(d[i]==k){
            for(int j=0;j<k;j++){
                st.pop();
            }
        }
    }
    if(st.empty()) return "EMPTY";
    stack<char> st2;
    string ans = "";
    while(!st.empty()){
        st2.push(s[st.top()]);
        st.pop();
    }
    while(!st2.empty()){
        ans+=st2.top();
        st2.pop();
    }
    return ans;
}
int main(){
    string s;
    int k;
    cin>>s>>k;
    cout<<xuly(s,k);
}