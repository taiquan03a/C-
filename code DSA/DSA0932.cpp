#include<bits/stdc++.h>
using namespace std;
int n,parent[1005],num[1005],ans=0;
void init(){
    for(int i=1;i<=n;i++){
        parent[i] = i;
        num[i] = 1;
    }
}
int Find(int u){
    if(u != parent[u]){
        parent[u] = Find(parent[u]);
    }
    return parent[u];
}

void Union(int u,int v){
    int a = Find(u), b = Find(v);
    if(a == b) return;
    if(num[a] < num[b]) swap(a,b);
    parent[b] = a;
    num[a] += num[b];
    ans = max(ans,num[a]);
}