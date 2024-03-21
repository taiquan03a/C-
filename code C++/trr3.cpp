//bai3

#include<iostream>
using namespace std;
int ok = 1, n,m, a[100], k;
void Init(){
	cout << "Nhap vao do dai n: "; cin >> n;
	cout << "NHap vao m bit 1 : "; cin >> m;
	cout << "NHap vao k bit 0 : "; cin >> k;
}
void Result(void){
	for (int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}
void khoi_tao(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sing(void){
	int i = n;
	while (i >= 1 && a[i] == 1){
		a[i] = 0; i--;
	}
	if (i == 0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}
int Test(){
	int dem = 1;
	for (int i = n; i >=1; i--){
		if(a[i]==1 && a[i-1]==1) dem++;
		else{
			if(dem!=m) dem=1;
		}
	}
	if(m == dem)  return 1;
	return 0;
}
int Test2(){
	int dem = 1;
	for (int i = n; i >=1; i--){
		if(a[i]==0 && a[i-1]==0) dem++;
		else{
			if(dem!=k) dem=1;
		}
	}
	if(k == dem)  return 1;
	return 0;
}
int main(){
	Init();
	khoi_tao();
	while (ok){
		if (Test() && Test2())Result();
		sing();
	}
	return 0;
}
//5 3
//00111
//01110
//10111
//11100
//11101
//
//6 2
//000011
//000100
//000101
//000110
//000111
//001000
//001001
//001010
//001000
//001100
//010011
//010110
//011000
//011001
//011010
//110000
//110001
//110010
//110100
//110101
