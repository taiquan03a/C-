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
		int a,b;
		int cnt=0;
		cin>>a>>b;
		if(a>b) swap(a,b);
		for(int i=a;i<=b;i++){
			if(check(i)) cnt++;
		}
		cout<<cnt<<endl;
	}
}
