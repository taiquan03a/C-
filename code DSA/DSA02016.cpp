#include<bits/stdc++.h>

using namespace std;

int n,cnt=0;
int cot[101],xuoi[101],nguoc[101];

void ql(int i){
	for(int j=1;j<=n;j++){
		if(!cot[j] && !xuoi[i-j+n] && !nguoc[i+j+1]){
			cot[j] = xuoi[i-j+n] = nguoc[i+j+1] =1;
			cout<<i<<" "<<j<<endl;
			if(i == n) {
				cnt++;
				cout<<"cach moi"<<endl;
			}
			else ql(i+1);
			cot[j] = xuoi[i-j+n] = nguoc[i+j+1] = 0;			
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		ql(1);
		cout<<cnt<<endl;
		cnt=0;
	}
}
