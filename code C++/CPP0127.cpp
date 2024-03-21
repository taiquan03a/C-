#include<bits/stdc++.h>

using namespace std;
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check(int n){
	for(int i=2;i<=n/2;i++){
		if(nt(i) && nt(n-i)) return i;
	}
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(check(n)!=-1){
			cout<<check(n)<<" "<<n-check(n)<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
}
