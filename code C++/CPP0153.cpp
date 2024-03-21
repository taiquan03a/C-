#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		int sum=0;
		if(k>0){
			for(int i=1;i<=n;i++){
				sum+=i%k;
			}
			if(k==sum) cout<<"1"<<endl;
			else cout<<"0"<<endl;
		}
	}
}
