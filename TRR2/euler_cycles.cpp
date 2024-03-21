#include<bits/stdc++.h>
using namespace std;

set<int> adj[1005];
void euler_cycles(int u){
    stack<int> st;
    vector<int> CE;
    st.push(u);
    while(!st.empty()){
        int s = st.top();
        if(adj[s].size() != 0){
            int t = *adj[s].begin();
            st.push(t);
            adj[s].erase(t);
            adj[t].erase(s);
        }
        else{
            int s = st.top();
            st.pop();
            CE.push_back(s);
        }
    }
    while(!st.empty()){
        int x = st.top();
        st.pop();
        CE.push_back(x);
    }
    reverse(CE.begin(),CE.end());
    for(auto it:CE){
        cout<<it<<' ';
    }
}

int main(){
    int n,m,x,y;
    cin>>n>>m;
    while(m--){
        cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    euler_cycles(8);
}