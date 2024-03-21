//tien to
#include<bits/stdc++.h>

using namespace std;
void sovle(vector<string> s){
    stack<int> st;
    for(int i = s.size()-1;i>=0;i--){
        if(s[i]=="+" || s[i]=="-"|| s[i]=="*"||s[i]=="/"){
            int op1 = st.top(); st.pop();
            int op2 = st.top(); st.pop();
            int tmp=0;
            if(s[i]=="+") tmp = op1 + op2;
            if(s[i]=="-") tmp = op1 - op2;
            if(s[i]=="*") tmp = op1*op2;
            if(s[i]=="/") tmp = op1/op2;
            st.push(tmp);
        }
        else{
            st.push(stoi(s[i]));
        }
    }
    cout<<st.top()<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        int n; cin>>n;
        cin.ignore();
        getline(cin,s);
        vector<string> v;
        stringstream ss(s);
        string tmp;
        string s2="";
        while(ss>>tmp){
            v.push_back(tmp);
        }
        sovle(v);
    }
}