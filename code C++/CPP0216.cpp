#include <bits/stdc++.h> 

using namespace std; 
int main() { 
	int z;cin>>z; 
	while(z--) { 
		int n;
		cin>>n; 
		int a[n]; 
		for(int &x:a) cin>>x; 
		int x,y;
		cin>>x>>y; 
		while(a[x]<=a[x+1] && x<y) x++; 
		while(a[x]>=a[x+1] && x<y) x++; 
		if(x!=y) cout<<"No\n"; 
		else cout<<"Yes\n"; 
	} 
}
