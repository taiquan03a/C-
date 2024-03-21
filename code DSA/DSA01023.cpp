#include<bits/stdc++.h>

using namespace std;

int n,k,a[1005],b[1005];
int ok=1;
void khoitao(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>b[i];
		a[i]=i;
	}
}
void sinh(){
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
		int cnt=1;
		while(ok){
			int tmp=0;
			for(int i=1;i<=k;i++){
				if(a[i] == b[i]) tmp++;
			}
			if(tmp != k) cnt++;
			else cout<<cnt<<endl;
			sinh();
		}
		ok = 1;
	}
}
