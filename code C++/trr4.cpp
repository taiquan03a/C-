//bai 4

#include<bits/stdc++.h>

using namespace std;

int n,k,ok=1;
string a;

void Init(){
	cout << "Nhap vao do dai n: "; cin >> n;
	cout << "NHap vao k bit A : "; cin >> k;

}
void xuat(){
	for (int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
void khoi_tao(){
	for(int i=1;i<=n;i++){
		a[i]='B';
	}
}
void sing(){
	int i=n;
	while(a[i] == 'A' && i>=1){
		a[i] = 'B';
		i--;
	}
	if(i==0) ok=0;
	else{
		a[i]='A';
	}
}
int check(){
	int cnt=1;
	for(int i=1;i<=n;i++){
		if(a[i]=='A' && a[i+1] == 'A') cnt++;
		else{
			if(cnt!=k) cnt=1;
		}
	}
	if(cnt==k) return 1;
	return 0;
}
int main(){
	Init();
	khoi_tao();
	while(ok){
		if(check()) {
			xuat();
		}
		sing();
	}
}
