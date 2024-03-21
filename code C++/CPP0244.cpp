#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	set<int> s;
	for(int i=0;i<n;i++) s.insert(a[i]);
	for(auto it:s) cout<<it<<" ";
}
