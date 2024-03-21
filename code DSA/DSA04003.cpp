#include<bits/stdc++.h>

using namespace std;

int mod = 123456789;

long long powMod(int n, long long k){
	if(k == 0) return 1;
	long long x = powMod(n,k/2);
	if(k%2==0) return (x*x)%mod;
	else return ((x*x)%mod*n)%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n; cin>>n;
		cout<<powMod(2,n-1)<<endl;
	}
}
