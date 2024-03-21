#include <bits/stdc++.h> 

using namespace std; 

struct PhanSo{
	long long tu,mau;
};
void nhap(PhanSo &a){
	cin>>a.tu>>a.mau;
}
void rutgon(PhanSo &p){ 
    long long i=__gcd(p.tu,p.mau); 
    p.tu=p.tu/i; 
    p.mau=p.mau/i; 
}
void in(PhanSo a){
    cout<<a.tu<<"/"<<a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}