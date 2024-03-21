#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        map<int ,int> pre;
        for(int i=0;i<n;i++){
            pre[a[0][i]] = 1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(pre[a[i][j]] == i) pre[a[i][j]]++;
            }
        }
        int cnt=0;
        for(int i=0;i<pre.size();i++){
            if(pre[i]==n) cout<<i<<" ";
        }
    }
}

// 2          1          4          3
// 1          1          1          1   
// 1         2          3          2

// 3          6          2          3

// 5          2          5          3