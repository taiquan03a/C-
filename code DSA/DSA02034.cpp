#include<bits/stdc++.h>

using namespace std;
int n;
bool a[100];
int x[100];
string s; 
void hienthi(){
	cout<<s; 
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
        if(tmp >= 2){
            if(a[j]){
                x[i]=j;
                s +=to_string(j); 
                a[j]=false;
                if(i==n) hienthi();
                else Try(i+1);
                a[j]=true;
                s.pop_back();
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
    }
}

