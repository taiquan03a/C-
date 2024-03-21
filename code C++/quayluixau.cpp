#include<bits/stdc++.h>

using namespace std;


void Hien_thi(int k,int x[]){
		for(int i=1;i<=k;i++){
			cout<<x[i];
		}
		for(int i=k;i>=1;i--){
			cout<<x[i];
		}
		cout<<" ";
}
void Try(int i,int k,int x[]){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==k) Hien_thi(k,x);
		else Try(i+1,k,x);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,x[100],k;
		cin>>n;
		for(k = 1; k<=n/2;k++){
			Try(1,k,x);
		}
		cout<<endl;
	}
}
//001000101100001101000100