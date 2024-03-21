#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int res = max(a.length(),b.length());
		if(a.length()<b.length()){
			reverse(a.begin(),a.end());
			for(int i=0;i<a.length();i++ )
			for(int i=a.length();i<res;i++){
				a.push_back('0');
			}
			
			reverse(a.begin(),a.end());
		}else{
			reverse(b.begin(),b.end());
			for(int i=0;i<b.length();i++ )
			for(int i=b.length();i<res;i++){
				b.push_back('0');
			}
			
			reverse(b.begin(),b.end());
		}
		int nho=0;
		vector<int> tong;
		for(int i=res-1;i>=0;i--){
			int tmp = (a[i]-'0') + (b[i]-'0')+nho;
			nho=0;
			if(tmp>=10){
				tmp-=10;
				nho=1;
			}
			tong.push_back(tmp);
 		}
		for(int i=tong.size()-1;i>=0;i--){
			cout<<tong[i];
		}
		cout<<endl;
	}
}

//000789
//198789
//199578
