#include<bits/stdc++.h>

using namespace std;
#define modul 1000000007
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=n-1;i>=0;i--){
			cin>>a[i];
		}
		long long sum=0;
		for(int i=n-1;i>=0;i--){
			long long tich=1;
			int tmp=i;
			while(tmp>0){
				tich=(tich*x)%modul;
				tmp--;
			}
			sum+=tich*a[i];
			if(sum>modul) sum=sum%modul;
		}
		cout<<sum<<endl;
	}
}
