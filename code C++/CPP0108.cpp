#include<bits/stdc++.h>

using namespace std;
int nt(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
// bool check_tang(long long n){
// 	vector<int> v;
// 	while(n>0){
// 		v.push_back(n%10);
// 		n/=10;
// 	}
// 	for(int i=0;i<v.size()-1;i++){
// 		if(v[i] <= v[i+1]) return false;
// 	}
// 	return true;
// }
bool check_giam(long long n){
	int cuoi=n%10;
	while(n>=10){
		int dau = cuoi;
		n/=10;
		cuoi = n%10;
		if(dau>=cuoi) return false;
	}
	return true;
}
bool check_tang(long long n){
	int cuoi=n%10;
	while(n>=10){
		int dau = cuoi;
		n/=10;
		cuoi = n%10;
		if(dau<=cuoi) return false;
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long cnt=0;
		long long dau=1,cuoi=1;
		int i=1;
		while(i<n) {
			dau*=10;
			i++;
		}
		i=1;
		while(i<n+1) {
			cuoi*=10;
			i++;
		}
		for(long long j=dau;j<cuoi;j++){
			if(check_tang(j) || check_giam(j)) if(nt(j))  cnt++;
		}
		cout<<cnt<<endl;
	}
}


