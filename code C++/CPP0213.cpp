#include<bits/stdc++.h>

using namespace std;
bool fibonacii(long long n){
	long long fb2=0,fb1=1,fb;
	if(n==1 || n==0) return true;
	while(fb<1001){
		fb=fb1+fb2;
		if(n==fb) return true;
		if(n<fb) return false;
		fb2=fb1;
		fb1=fb;
	} 
	return false;
} 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(fibonacii(a[i])) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
