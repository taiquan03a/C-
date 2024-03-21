#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv,ten,lop,ns;
    float GPA;
};

void nhap(SinhVien &a){
    a.msv = "B20DCCN001";
    scanf("\n");
    getline(cin,a.ten);
    cin>>a.lop>>a.ns>>a.GPA;
}
void in(SinhVien a){
    cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" ";
    if(a.ns[2] != '/') a.ns.insert(a.ns.begin(), '0'); 
	if(a.ns[5] != '/') a.ns.insert(a.ns.begin()+3, '0');
    cout<<a.ns<<" "<<fixed<<setprecision(2)<<a.GPA<<endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}