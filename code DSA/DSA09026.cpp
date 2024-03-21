#include<bits/stdc++.h>

using namespace std;
bool visited[1005];
int parent[1005];
vector<int> ke[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto y:ke[x]){
            if(!visited[y]){
                parent[y] = x;
                visited[y] = true;
                q.push(y);
            }
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int v,e,s,t,x,y;
        cin>>v>>e>>s>>t;
        memset(visited,false,sizeof(visited));
        for(int i=1;i<=1005;i++) ke[i].clear();
        while(e--){
            cin>>x>>y;
            ke[x].push_back(y);
            //ke[y].push_back(x);
        }
        BFS(s);
        if(!visited[t]){
            cout<<"-1"<<endl;
        }
        else{
            stack<int> st;
            while(t != s){
                st.push(t);
                t = parent[t];
            }
            st.push(s);
            while(!st.empty()){
                cout<<st.top()<<' ';
                st.pop();
            }
            cout<<endl;
        }
    }
}