#include<bits/stdc++.h>

using namespace std;
int check(int n,int k){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				cnt++;
				if(cnt==k){
					return i;
				}
				n/=i;
			}
			if(n!=1){
				cnt++;
				if(cnt==k) return n;
				else return -1;
			}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
//		int cnt=0;
		cout<<check(n,k)<<endl;
	}
}
