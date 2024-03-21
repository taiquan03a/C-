#include<bits/stdc++.h>

using namespace std;
int a[10005],n,k;
int ok=1;
vector<int> b;
void sinh(int m){
	int i = k;
	while(i >= 1 && a[i] == m-k+i){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j = i+1; j <= m;j++){
			a[j] = a[j-1]+1;
		}
	}
}
int main(){
	cin>>n>>k;
	set<int> se;
	for(int i=1;i<=n;i++) {
		int x; cin>>x;
		se.insert(x);
		if(i<=k) a[i] = i;
	}
	int y = 0;
	b.push_back(y);
	for(auto it:se) b.push_back(it);
	int m = b.size()-1;
	while(ok){
		for(int i=1;i<=k;i++){
			cout<<b[a[i]]<<" ";
		}
		cout<<endl;
		sinh(m);
	}
}
