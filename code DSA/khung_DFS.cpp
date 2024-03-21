#include<bits/stdc++.h>
using namespace std;

int a[1001][1001], n, check[1001]; 
vector<pair<int, int>> T;
void Tree_DFS(int u){ 
    //cout<<"Dinh duyet : "<<v<<endl;
    int v; 
    check[u]=false; 
    for(v=1; v<=n; v++){ 
        if(a[u][v] && check[v]) {
            T.push_back({u, v});
            Tree_DFS(v);
        }
    } 
} 
int main(){ 
    cout<<"So dinh cua ma tran n = ";
    cin>>n; 
    cout<<"Nhap ma tran ke :"<<endl;
    for(int i=1; i<=n;i++){ 
        for(int j=1; j<=n;j++){ 
            cin>>a[i][j]; 
        } 
    } 
    for(int i=1; i<=n; i++) check[i]=true; 
    for(int i=1; i<=n;i++) if(check[i]) 
    Tree_DFS(i); 
    if(T.size() < n-1) cout<<"Do thi khong lien thong"<<endl;
    else {
        for(int i=0;i<T.size();i++){
            cout<<T[i].first<<" "<<T[i].second<<endl;
        }
    }
}
// 13
// 0 1 1 1 0 0 0 0 0 0 0 0 0
// 1 0 1 1 0 0 0 0 0 0 0 0 0
// 1 1 0 1 1 0 0 0 0 0 0 0 0
// 1 1 1 0 0 0 0 0 0 0 0 0 0
// 0 0 1 0 0 1 1 1 1 0 0 0 0
// 0 0 0 0 1 0 1 0 1 0 0 0 0
// 0 0 0 0 1 1 0 1 0 0 0 0 0
// 0 0 0 0 1 0 1 0 0 0 0 0 0
// 0 0 0 0 1 1 0 1 0 1 0 0 0
// 0 0 0 0 0 0 0 0 1 0 1 1 1
// 0 0 0 0 0 0 0 0 0 1 0 1 1
// 0 0 0 0 0 0 0 0 0 1 1 0 1
// 0 0 0 0 0 0 0 0 0 1 1 1 0