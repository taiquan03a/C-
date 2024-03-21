#include<bits/stdc++.h>

using namespace std;
int find(int a[], int l, int r, int x){
	if(l > r) return -1;
	int mid = (r + l)/2;
	if(a[mid] <= x){
		int res = find(a,mid+1,r,x);
		if(res == -1) return mid;
		else  return res;
	}
	return find(a,l,mid-1,x);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		cout<<find(a,1,n,x)<<endl;
	}
}
