#include<bits/stdc++.h>

using namespace std;
int adj[1005][1005];
int main(){
    int n;
    cin>>n;
    int x;
    vector<int> v[1005];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>x;
            if(x==1){
                v[i].push_back(j);
                //v[j].push_back(i);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(auto it:v[i]) cout<<it<<" ";
        cout<<endl;
    }
}