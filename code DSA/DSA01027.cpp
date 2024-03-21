#include<bits/stdc++.h>

using namespace std;
int a[10005],n;
int ok=1;
vector<int> b;
void sinh(){
	int i = n;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0) ok=0;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	cin>>n;
	set<int> se;
	for(int i=1;i<=n;i++) {
		int x; cin>>x;
		se.insert(x);
		a[i]=i;
	}
	int y = 0;
	b.push_back(y);
	for(auto it:se) b.push_back(it);
	while(ok){
		for(int i=1;i<=n;i++){
			cout<<b[a[i]]<<" ";
		}
		cout<<endl;
		sinh();
	}
}
