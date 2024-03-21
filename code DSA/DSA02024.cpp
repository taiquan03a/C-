#include<bits/stdc++.h>

using namespace std;
int n,a[105],x[105];
vector<string> v;
void ql(int i, int bd){
	for(int j=bd;j<=n;j++){
		if(a[j] > x[i-1]){
			x[i] = a[j];
			if(i>=2){
				string tmp="";
				for(int u=1;u<=i;u++){
					tmp += to_string(x[u]) + " ";
					
				}
				v.push_back(tmp);
			}
			ql(i+1,j+1);
		}
	}
} 

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ql(1,1);
	sort(v.begin(),v.end());
	for(auto it:v) cout<<it<<endl;
}
