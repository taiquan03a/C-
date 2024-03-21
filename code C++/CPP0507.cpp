#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
    long long tu, mau;
};

void nhap(PhanSo &a){
    cin>>a.tu>>a.mau;
}

void in(PhanSo a){
    cout<<a.tu<<"/"<<a.mau;
}
void rutgon(PhanSo &a){
    long long tmp = __gcd(a.tu,a.mau);
    a.tu = a.tu/tmp;
    a.mau = a.mau/tmp;
}
PhanSo tong(PhanSo a,PhanSo b){
    PhanSo tmp;
    tmp.tu = a.tu*b.mau + b.tu*a.mau;
    tmp.mau = a.mau*b.mau;
    rutgon(tmp);
    return tmp;
}
int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
}