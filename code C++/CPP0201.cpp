#include<bits/stdc++.h>

using namespace std;
bool comp(const int a, const int b){
   return a > b;
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
		sort(a,a+n);
//		for(int i=0;i<n;i++){
//			cout<<a[i]<<" ";
//		}
		long long min=10e9+1;
		for(int i=0;i<n-1;i++){
			int res=a[i+1]-a[i];
			if(res<min) min = res;
		}
		cout<<min<<endl;
	}
}
