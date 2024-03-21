#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	string a;
	getline(cin,s);
	getline(cin,a);
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		if(tmp!=a) cout<<tmp<<" ";
	}
}
