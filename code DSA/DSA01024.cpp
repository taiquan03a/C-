#include<bits/stdc++.h>

using namespace std;
int n,k,ok=1;
int a[101];
void sinh(int m){
	int i=k;
	while(i>=1 && a[i] == m-k+i){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j] = a[j-1]+1;
		}
	}
}
int main(){
	cin>>n>>k;
	set<string> se;
	vector<string> s;
	string tmp = " ";
	s.push_back(tmp);
	for(int i=1;i<=n;i++){
		string t;
		cin>>t;
		se.insert(t);
	}
	for(auto it:se) s.push_back(it);
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
	int m = s.size()-1;
//	for(int i=1;i<=s.size();i++) cout<<s[i];
	while(ok){
		for(int i=1;i<=k;i++){
			cout<<s[a[i]]<<" ";
		}
		cout<<endl;
		sinh(m);
	}
}
