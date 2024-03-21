#include<bits/stdc++.h>

using namespace std;
long long bcnn(long long a,long long b){
	return a*b/__gcd(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int ok=1;
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long tmp = bcnn(bcnn(x,y),z);
		long long dau=pow(10,n-1),cuoi=pow(10,n);
		long long a=dau/tmp;
		long long b=cuoi/tmp;
		if(b<1){
			cout<<"-1"<<endl;
			ok=0;
		}
		else{
			if(a<1)cout<<tmp<<endl;
			else{
				while(tmp*a < dau){
					a++;
				}
				cout<<a*tmp<<endl;
			}
		}
	}
}
