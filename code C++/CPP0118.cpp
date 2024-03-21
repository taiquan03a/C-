#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int ok=1;
		int n;
		cin>>n;
		int cnt2=0;
		vector<int> v;
		for(int i=2;i<=n;i++){ 
			int cnt1=0;
			while(n%i==0){
				v.push_back(i);
				n/=i;
				cnt1++;
			}
			if((cnt1>1)){
				cout<<"0"<<endl;
				ok=0;
				break;
			}
			
		}
		if(ok){
			if(n!=1) v.push_back(n);
			if(v.size() == 3) cout<<"1"<<endl;
			else cout<<"0"<<endl;
		}
	}
}
