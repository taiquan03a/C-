#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long fb0=0,fb1=1,fb;
		if(n==0) cout<<"0"<<endl;
		if(n==1) cout<<"1"<<endl;
		if(n>1){
			for(int i=2;i<=n;i++){
				fb=fb0+fb1;
				fb0=fb1;
				fb1=fb;
			}
			cout<<fb;
			cout<<endl;
		}
	}
}
