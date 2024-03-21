#include<bits/stdc++.h>

using namespace std;
long long f[101];
int fb(int n, long long k){
	if(n==1) return 0;
	if(n==2) return 1;
	if(k <= f[n-2]) return fb(n-2,k);
	return fb(n-1,k-f[n-2]);
} 
int main(){
	int t,n;
	long long k;
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=92;i++) f[i] = f[i-1] + f[i-2];
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<fb(n,k)<<endl; 
	}
}

