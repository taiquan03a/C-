#include<bits/stdc++.h>

using namespace std;
int m,k;
char n,x[101];
vector<string> v;
void hien_thi(){
    for(int i=1;i<=k;i++){
        cout<<x[i];
    }
    cout<<endl;
}
void Try(int i,char bd){
    for(int j=bd; j <= n; j++){
        x[i]=j;
        if(i==k) hien_thi();
        else Try(i+1,j);
    }
}
int main(){
	cin>>n>>k;
    Try(1,'A');
}
