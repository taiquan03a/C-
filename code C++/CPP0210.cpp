#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int max=0;
		int ok=1;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j] > a[i]) {
					int tmp=a[j]-a[i];
					if(tmp>max) max=tmp;
					ok=0;
				}
			}
		}
		if(ok) cout<<"-1"<<endl;
		else cout<<max<<endl;
	}
}

