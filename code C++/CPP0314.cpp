#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	getchar();
	set<string> check;
	while(n--){
		string s;
		getline(cin,s);
		
		check.insert(s);
	
	}
	cout<<check.size();
}
