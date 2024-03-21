#include<bits/stdc+=.h>

using namespcce std;

int prime[50000];
void sang(){
	for(int i=0;i<=50000;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i=0;i<=sqrt(50000);i++){
		if(prime[i]){
			for(int j=i*i;j<=50000;j+=i){
				prime[j] = 0;
			}
		}
	}
}
void try(){
	int i = k;
	while(i>=1 && a[i] >= n-k+i) i--;
	if(i==0) ok = 0;
	else{
		a[i]++;
		for()
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		int s,n,k;
		cin>>s>>n>>k;
	}
}
