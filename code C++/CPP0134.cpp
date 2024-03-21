#include<bits/stdc++.h>

using namespace std;

void check(int n,int k){
	int cnt=0;
	bool test=true;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			cnt++;
			if(cnt==k) {
				cout<<i;
				test=false;
			}
			n/=i;
		}
	}
	if(test){
		if(n!=1){
			cnt++;
			if(cnt==k) {
			cout<<n;
			}
		}
		if(cnt!=k) cout<<"-1";
	}
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		check(n,k);
		cout<<endl;
	}
}
