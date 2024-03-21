#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum_le=0,sum_chan=0;
		for(int i=0;i<s.length();i++){
			if(i%2==0) sum_le+=s[i]-'0';
			else sum_chan+=s[i]-'0';
		}
		int res=sum_le - sum_chan;
		if(res%11==0) cout<<1;
		else cout << 0;
		cout<<endl;
	}
}
