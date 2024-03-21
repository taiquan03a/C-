#include<bits/stdc++.h>

using namespace std;
string chuan_hoa(string s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	return s;
}

int main(){
	string fullname,name,firstname,tmp;
	getline(cin,fullname);
	stringstream ss(fullname);
	vector<string> names;
	while(ss>>tmp){
		names.push_back(tmp);
	}
	name=names[names.size()-1];
	for(int i=0;i<name.length();i++){
		name[i]=toupper(name[i]);
	}
	for(int i=0;i<names.size()-1;i++){
		firstname+=chuan_hoa(names[i]);
		if(i==names.size()-2) firstname+=", ";
		else firstname+=" ";
		
	}
	cout<<firstname<<name;

}
