#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string hang_hoa;
		cin>>hang_hoa;
		int base = hang_hoa.find("084");
		cout<<hang_hoa.erase(base,3)<<endl; 
	}
}
