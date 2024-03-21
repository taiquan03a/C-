//bai6

#include<bits/stdc++.h>

using namespace std;

int n,k,p,a[100],b[100],ok=1;
void khoi_tao(){
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
}
void sinh(){
	int i=k;
	while(i>=1 && a[i]==b[n-k+i]){
		i--;
	}
	if(i==0) ok=0;
	else{
		int tmp=0;
		for(int j=1;j<=n;j++){
			if(a[i]==b[j]){
				tmp=j+1;
				a[i]=b[j+1];
				break;
			}
		}
		for(int j=i+1;j<=k;j++){
			tmp++;
			a[j]=b[tmp];
		}
	}
}
int test(){
	int sum=0;
	for(int i=1;i<=k;i++){
		sum+=a[i];
	}
	if(sum==p) return 1;
	return 0;
}
int main(){
	cin>>n>>k;
	khoi_tao();
	for(int i=1;i<=k;i++){
		a[i]=b[i];
	}
	while(ok){
		if(test()){
			for(int i=1;i<=k;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}	
		sinh();
	}
}
