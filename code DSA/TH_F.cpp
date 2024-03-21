#include<bits/stdc++.h>

using namespace std;

bool visited[20005];
vector<int> ke[20005];
int n,m;

void DFS(int u){
    visited[u] = true;
    for(auto v:ke[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}

void check(){
    priority_queue<pair<int,int>> q;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt++;
            DFS(i);
        }
    }
    for(int i=1;i<=n;i++){
        int dem = 0;
        memset(visited,false,sizeof(visited));
        visited[i] = true;
        for(int j=1;j<=n;j++){
            if(!visited[j]){
                dem++;
                DFS(j);
            }
        }
        q.push({dem,i});
    }
    int top = q.top().first;
    if(top == cnt) cout<<0<<endl;
    else{
        int a[100005], l = 0;
        while(1){
            pair<int,int> p = q.top();
            if(p.first == top){
                a[l++] = p.second;
                q.pop();
            }else break;
        }
        sort(a,a+1);
        for(int i=0;i<=l-1;i++) cout<<a[i];
        cout<<endl;
    }
}
main(){
    int t;cin>>t;
    while(t--){
        memset(visited,false,sizeof(visited));
        memset(ke,0,sizeof(ke));
        cin>>n>>m;
        int x,y;
        for(int i=1;i<=m;i++){
            cin>>x>>y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        check();
    }
}