#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string res;
	vector<string> v;
	while(ss>>res){
		v.push_back(res);
	}
	cout<<v[v.size()-1];
	for(int i=0;i<v.size()-1;i++){
		cout<<v[i][0];
	}
	cout<<"@ptit.edu.vn"<<endl;
}
