#include<bits/stdc++.h>
using namespace std;

int a[101][101], n, check[101]; 

void DFS(int v){ 
    cout<<"Dinh duyet : "<<v<<endl;
    int u; 
    check[v]=false; 
    for(u=1; u<=n; u++){ 
        if(a[v][u]==1 && check[u]) 
        DFS(u);
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
    DFS(i); 
}