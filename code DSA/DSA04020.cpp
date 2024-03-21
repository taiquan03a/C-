#include<bits/stdc++.h>

using namespace std;
int find(int a[], int l, int r, int x){
	if(l > r) return -1;
	int mid = (r+l)/2;
	if(a[mid] == x) return mid;
	if(a[mid] > x){
		return find(a,l,mid-1,x);
	}else return find(a,mid+1,r,x);
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(find(a,1,n,k) == -1) cout<<"NO"<<endl;
		else cout<<find(a,1,n,k)<<endl;
	}
}
