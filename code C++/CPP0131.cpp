#include<bits/stdc++.h>

using namespace std;
int check(int n){
	for(int i=2;i<=n;i++){
		if(n%i==0) return i;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=1;i<=n;i++){
			if(i==1) cout<<"1"<<" ";
			else cout<<check(i)<<" ";
		}
		cout<<endl;
	}
} 
