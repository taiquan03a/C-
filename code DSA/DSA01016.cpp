//bai5

#include<bits/stdc++.h>

using namespace std;
int a[100],n,k,ok=1,cnt=1;

void nhap(){
	cin>>n;
	a[1] = n;
}
void xuat(){
	cout<<"(";
	for(int i=1;i<=cnt;i++){
		if(i==cnt) cout<<a[i]<<") ";
		else cout<<a[i]<<" ";
	}
}
void sing(){
	int i=cnt;
	while(i>=1 && a[i]==1){
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]--;
		int d=cnt-i+1;
		cnt=i;
		int q=d/a[i];
		int r=d%a[i];
		if(q){
			for(int j=1;j<=q;j++){
				cnt++;
				a[cnt]=a[i];
			}
		}
		if(r){
			cnt++;
			a[cnt]=r;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		ok=1;
		cnt=1;
		nhap();
		while(ok){
			xuat();
			sing();
		}
		cout<<endl;
	}
}

