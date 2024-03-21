#include<bits/stdc++.h>

using namespace std;

class Gamer{
	private:
		string username;
		string password;
		string name;
		string timein;
		string timeout;
	public:
		friend istream& operator >> (istream &in, Gamer &a);
		friend ostream& operator << (ostream &out, Gamer a);
		bool operator < (Gamer a);
		int Chuan_Hoa();
};

istream& operator >>(istream &in,Gamer &a){
	in>>a.username>>a.password;
	cin.ignore();
	getline(in,a.name);
	cin>>a.timein>>a.timeout;
	return in;
}
ostream& operator << (ostream &out, Gamer a){
	out<<a.username<<' '<<a.password<<' '<<a.name<<' '<<a.Chuan_Hoa()/60<<" gio "<<a.Chuan_Hoa()%60<<" phut"<<endl;
	return out;
}
int Gamer::Chuan_Hoa(){
	int h_in = stoi(timein.substr(0,2));
	int m_in = stoi(timein.substr(3,2));
	int h_out = stoi(timeout.substr(0,2));
	int m_out = stoi(timeout.substr(3,2));
	return h_out*60 + m_out - (h_in*60 + m_in);
}
bool Gamer::operator <(Gamer a){
	if(this->Chuan_Hoa() != a.Chuan_Hoa()) return this->Chuan_Hoa() > a.Chuan_Hoa();
	else{
		return this->name < a.name;
	}
} 
int main(){
	int n;
	cin>>n;
	Gamer a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}

