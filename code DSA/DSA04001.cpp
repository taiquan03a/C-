#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;
long long Try(int n,long long k){
	if(k==0) return 1;
	long long x = Try(n,k/2);
	if(k%2==0) return x*x%mod;
	return n*(x*x%mod)%mod;
}
int main(){
	while(1){
		int n;
		long long k;
		cin>>n>>k;
		if(n==0 && k==0) break;
		cout<<Try(n,k)<<endl;
	}
}
