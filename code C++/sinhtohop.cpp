#include<bits/stdc++.h>

using namespace std;

int n,k,a[1005];
int ok=1;
void khoitao(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void Try(){
	int i=k;
	while(i>=1 && a[i] == n-k+i){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		khoitao();
		while(ok){
			for(int i=1;i<=k;i++){
				cout<<a[i];
			}
			cout<<" ";
			Try();
		}
		cout<<endl;
		if(!ok) ok=1;
	}
}
