#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string Ho_ten,Lop,Ngay_sinh,MSV;
		float GPA;
		static int cnt;
	public:
		// SinhVien();
		friend void Chuan_Hoa (SinhVien&);
		bool operator < (SinhVien a);
		
		friend istream& operator >> (istream &in,SinhVien &a);
		friend ostream& operator << (ostream &out,SinhVien a);
};
bool SinhVien::operator < (SinhVien a){
	return this->GPA < a.GPA;
}
int SinhVien::cnt=0;
istream& operator >> (istream &in,SinhVien &a){
	a.cnt++;
	a.MSV = "B20DCCN" + string(3-to_string(a.cnt).length(), '0') + to_string(a.cnt);
	scanf("\n");
	getline(in,a.Ho_ten);
	in>>a.Lop>>a.Ngay_sinh;
	do{cin>>a.GPA;}
	while(a.GPA > 4 || a.GPA < 0);
	return in;
}

ostream& operator << (ostream &out,SinhVien a){
	cout<<a.MSV<<" ";
	Chuan_Hoa(a);
	cout<<a.Ho_ten<<" "<<a.Lop<<" ";
	if(a.Ngay_sinh[2] != '/') a.Ngay_sinh.insert(a.Ngay_sinh.begin(), '0'); 
	if(a.Ngay_sinh[5] != '/') a.Ngay_sinh.insert(a.Ngay_sinh.begin()+3, '0');
	out<<a.Ngay_sinh<<" ";
	out<<fixed<<setprecision(2)<<a.GPA;
	out<<endl;
	return out;
}
void Chuan_Hoa(SinhVien& a){
	string res="";
	stringstream ss(a.Ho_ten);
	string s;
	while(ss>> s){
		res+= toupper(s[0]);
		for(int i=1;i<s.length();i++){
			res+= tolower(s[i]);
		}
		res+=" ";
	}
	res.erase(res.length());
	a.Ho_ten = res;
}
void sapxep( SinhVien a[],int n){
	sort(a,a+n);
	reverse(a,a+n);
}
int main(){
	SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
	sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

