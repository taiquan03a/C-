#include<bits/stdc++.h>

using namespace std;
int tmp[1000001];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<1000001;i++) tmp[i]=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			tmp[a[i]]++;
		}
		
		cout<<endl;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(tmp[a[i]]>1){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
