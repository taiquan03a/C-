#include<bits/stdc++.h>

using namespace std;

vector<int> ke[10005];
int cnt = 1, res = 0;
int dis[10005], low[10005];
stack<int> st;
int mo = 1e9;
void DFS(int u){
    dis[u] = low[u] = cnt++;
    st.push(u);
    for(int v : ke[u]){
        if(dis[v])
            low[u] = min(low[u], dis[v]);
        else{
            DFS(v);
            low[u] = min(low[u], low[v]);
        }
    }
    if(dis[u] == low[u]){
        res++;
        int v = st.top();
        st.pop();
        dis[v] = low[v] = mo;
        while(v != u){
            v = st.top();
            st.pop();
            dis[v] = low[v] = mo;
        }
    }
}

int main(){
    int v, e, x, y;
    cin >> v >> e;
    while(e--){
        cin >> x >> y;
        ke[x].push_back(y);
    }
    res = 0;
    for(int i = 1; i <= v; i++){
        if(!dis[i]) DFS(i);
    }
    cout << res;
}

