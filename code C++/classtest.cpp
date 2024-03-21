#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string MSV,name,lop,email;     
    public:
        void nhap();
        void xuat();
        string getLop(){
            return lop;
        }
};
void SinhVien::nhap(){
    cin>>MSV;
    getchar();
    getline(cin,name);
    cin>>lop>>email;
}
void SinhVien::xuat(){
    cout<<MSV<<" "<<name<<" "<<lop<<" "<<email<<endl;
}
int main(){
    int n;
    cin>>n;
    SinhVien a[n];
    for(int i=0;i<n;i++){
        a[i].nhap();
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
        for(int i=0;i<n;i++){
            if(a[i].getLop() == s){
                a[i].xuat();
            }
        }
    }

}

// 4
// B16DCCN011
// Nguyen Trong Duc Anh
// D16CNPM1
// sv1@stu.ptit.edu.vn
// B15DCCN215
// To Ngoc Hieu
// D15CNPM3
// sv2@stu.ptit.edu.vn
// B15DCKT150
// Nguyen Ngoc Son
// D15CQKT02-B
// sv3@stu.ptit.edu.vn
// B15DCKT199
// Nguyen Trong Tung
// D15CQKT02-B
// sv4@stu.ptit.edu.vn
// 1
// D15CQKT02-B