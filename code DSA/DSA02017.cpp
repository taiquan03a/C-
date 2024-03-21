#include<bits/stdc++.h>

using namespace std;

int n=8,a[105][105];
int cot[105],xuoi[105],nguoc[105];
int max_val=0;
void ql(int i,int sum){
	for(int j=1;j<=n;j++){
		if(!cot[j] && !xuoi[i-j+n] && !nguoc[i+j+1]){
			cot[j] = xuoi[i-j+n] = nguoc[i+j+1] =1;
			if(i == n){
				max_val = max(max_val,sum+a[i][j]);
			}
			else ql(i+1,sum+a[i][j]);
			cot[j] = xuoi[i-j+n] = nguoc[i+j+1] = 0;			
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>a[i][j];
			}
		}
		ql(1,0);
		cout<<max_val<<endl;
		max_val=0;
	}
}
