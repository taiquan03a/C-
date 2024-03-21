#include<bits/stdc++.h>

using namespace std;

int n,k,a[1005];
char b[1005];
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
		for(int i=1;i<=n;i++){
			int x=64;
			int y = x+i;
			b[i] = (char)y;
			
		}
//		for(int i=1;i<=n;i++) cout<<b[i];
		while(ok){
			for(int i=1;i<=k;i++){
				cout<<b[a[i]];
			}
			cout<<endl;
			Try();
		}
		ok=1;
	}
}
