#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	getchar();
	while(t--){
		string s;
		getline(cin,s);
		int k;
		cin>>k;
		getchar();
		set<char> se;
		for(int i=0;i<s.length();i++){
			se.insert(s[i]);
		}
		if(se.size() + k >= 26) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
