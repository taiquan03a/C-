#include<bits/stdc++.h>

using namespace std;
int n;
bool a[100];
int x[100];

void hienthi(){
    for(int i=1;i<=n;i++){
        if(x[i != 0])
        cout<<x[i];
    }
    cout<<endl;
}
void khoitao(){
    for(int i=1;i<=n;i++){
        a[i]=true;
    }
}
void Try(int i){
    for(int j=1;j<=n;j++){
        int tmp = abs(x[i-1] - j);
        if(tmp != 1){
            if(a[j]){
                x[i]=j;
                a[j]=false;
                if(i==n) hienthi();
                else Try(i+1);
                a[j]=true;
            }
        }
    }
}
int main (){
    int t; cin>>t;
    while(t--){
        cin>>n;
        khoitao();
        Try(1);
        cout<<endl;
    }
}

