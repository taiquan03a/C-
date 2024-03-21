#include<bits/stdc++.h>
using namespace std;

int check(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int cnt=0;
		for(int i=2;i<=sqrt(n);i++){
			if(check(i)) cnt++;
		}
		cout<<cnt<<endl;
	}
}
