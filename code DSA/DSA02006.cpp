#include<bits/stdc++.h>

using namespace std;
int n,k,ok=1;
int a[101],x[101];
void ql(int i,int sum){
	for(int j=1;j<=n;j++){
		if(a[j] > x[i-1] && a[i] + sum <= k){
			x[i] = a[j];
			if(sum + a[j] == k){
				cout<<"[";
                for(int u=1;u<i;u++){
                    cout<<x[u]<<" ";
                }
                cout<<x[i]<<"] ";
                ok=0;
			}else{
				ql(i+1,sum+a[j]);
			}
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		ql(1,0);
		if(ok) cout<<"-1";
		cout<<endl;
		ok=1;
	}
}
