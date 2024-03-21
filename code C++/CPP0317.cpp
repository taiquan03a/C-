#include<bits/stdc++.h>

using namespace std;
int check(string s){
	string tmp;
	for(int i=s.length()-1;i>=0;i--){
		if((s[i]-'0') % 2 != 0) return 0;
	}
	for(int i=0;i<=s.length()/2;i++){
		if(s[i] != s[s.length()-i-1]) return 0; 
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	getchar();
	while(t--){
		string s;
		getline(cin,s);
		if(check(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
