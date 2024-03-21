#include<bits/stdc++.h>

using namespace std;

void ql(int n,char nguon,char phu, char dich){
	if(n==1){
		cout<<nguon<<" -> "<<dich<<endl;
		return;
	}
	ql(n-1,nguon,dich,phu);
	ql(1,nguon,phu,dich);
	ql(n-1,phu,nguon,dich);
}
int main(){
	int n;
	cin>>n;
	ql(n,'A','B','C');
}
