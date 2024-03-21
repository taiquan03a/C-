#include<bits/stdc++.h>

using namespace std;

int  kt(string s){
    int n = s.length();
    stack<int> st;
    st.push(-1);
    for(int i=0;i<n;i++){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            int j = st.top();
            st.pop();
            if(i-j == 2) return 1;
            if(s[j+1] == '(' && s[i-1] == ')') return 1;
        }
    }
    return 0;
}
int main(){
    int t; cin>>t;
    cin.ignore();
    while(t--){

        string s;
        getline(cin,s);
        
        if(kt(s)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}