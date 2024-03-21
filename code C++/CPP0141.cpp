#include<bits/stdc++.h>

using namespace std;
bool fibonacii(long long n){
	long long fb2=0,fb1=1,fb;
	if(n==1 || n==0) return true;
	while(fb<10e18+1){
		fb=fb1+fb2;
		if(n==fb) return true;
		if(n<fb) return false;
		fb2=fb1;
		fb1=fb;
	} 
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(fibonacii(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
} 
