#include<bits/stdc++.h>

using namespace std;
int n,a[101],b[101];
int ok=1;
void sinh(){
	int i=n;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0) ok=0;
	else{
		int j=n;
		while( a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		int cnt=1;
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		for(int i=1;i<=n;i++){
			a[i]=i;
		}
		while(ok){
			
			int tmp=0;
			for(int i=1;i<=n;i++){
				if(a[i] == b[i]) tmp++;
			}
			if(tmp != n) cnt++;
			else cout<<cnt<<endl;
			sinh();
		}
		ok=1;
	}
}
