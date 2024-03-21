#include<bits/stdc++.h>

using namespace std;
int n,m,k,x[100];
vector<string> v;
void hien_thi(){
    for(int i=1;i<=k;i++){
        cout<<v[x[i]]<<" ";
    }
    cout<<endl;
}
void Try(int i){
    for(int j=x[i-1]+1; j <= m-k+i; j++){
        x[i]=j;
        if(i==k) hien_thi();
        else Try(i+1);
    }
}
int main(){
	cin>>n>>k;
	set<string> se;
	for(int i=1;i<=n;i++){
		string t; cin>>t;
		se.insert(t);
	}
	
	string t1 = " ";
	v.push_back(t1);
	for(auto it:se) v.push_back(it);
	m = v.size()-1;
    x[0]=0;
    Try(1);
}
