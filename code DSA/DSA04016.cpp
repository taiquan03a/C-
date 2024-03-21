#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+1],b[m+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		int cnt=0;
		vector<int> v;
		int i=0; int j=0;
		while(i < n && j < m){
			if(a[i] <= b[j]){
				cnt++;
				if(cnt==k) {
					cout<<a[i]<<endl;
					break;
				}
//				v.push_back(a[i]);
				i++;
			}
			else {
				cnt++;
				if(cnt == k){
					cout<<b[j]<<endl;
					break;
				}
				j++;
			}
		}
		while(i<n){
			cnt++;
			if(cnt == k){
				cout<<a[i]<<endl;
				break;
			}
			i++;
		}
		while(j<m) {
			cnt++;
			if(cnt == k){
				cout<<b[j]<<endl;
				break;
			}
			j++;
		}
	}
}
