#include <bits/stdc++.h> 

using namespace std; 

struct ThiSinh{
	string ten,ns;
	float diem1,diem2,diem3,tong;
};
void nhap(ThiSinh &a){
	getline(cin,a.ten);
	cin>>a.ns>>a.diem1>>a.diem2>>a.diem3;
}
void in(ThiSinh a){
    cout<<a.ten<<" ";
    if(a.ns[2] != '/') a.ns.insert(a.ns.begin(), '0'); 
	if(a.ns[5] != '/') a.ns.insert(a.ns.begin()+3, '0');
    cout<<a.ns<<" "<<fixed<<setprecision(1)<<a.diem1+a.diem2+a.diem3<<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}