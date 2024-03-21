#include<bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string msv,ten,lop,email;
    public:
        friend istream& operator >> (istream &in,SinhVien &a);
        friend ostream& operator << (ostream &out, SinhVien a);
        void sapxep(SinhVien a[], int n);
        bool operator < (SinhVien a);
        void 
};
bool SinhVien::operator < (SinhVien a){
    return this -> msv < a.msv;
}
istream& operator >> (istream &in, SinhVien &a){
    in>>a.msv;
    scanf("\n");
    getline(in,a.ten);
    in>>a.lop>>a.email;
    return in;
}

ostream& operator <<(ostream &out, SinhVien a){
    out<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
    return out;
}

void SinhVien::sapxep(SinhVien a[],int n){
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i].lop == a[i+1].lop){
            if(a[i].msv < a[i+1].msv) swap(a[i],a[i+1]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    SinhVien ds[n];
    for(int i=0;i<n;i++){
        cin>>ds[i];
    }
    sapxep(ds,n);
    for(int i=0;i<n;i++){
        cout<<ds[i];
    }
}