#include<bits/stdc++.h>

using namespace std;
int n,a[101][101];
int dem=0;
void Try(int i, int j, string s){
	if(i == n && j == n) {
        cout<<s<<" ";
        dem++;
    }
	if(i + 1 <= n && a[i+1][j] == 1){
		a[i+1][j] = 0;
		s += "D";
		Try(i+1,j,s);
		s.erase(s.length() - 1, 1);
		a[i+1][j] = 1;
	}
	if(j + 1 <= n && a[i][j+1] == 1){
		a[i][j+1] = 0;
		s += "R";
		Try(i,j+1,s);
		s.erase(s.length() - 1, 1);
		a[i][j+1] = 1;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		//int n;
		cin>>n;
		//int a[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) cin>>a[i][j];
		}
		string s = "";
		if(!a[1][1]) cout<<"-1"<<endl;
        else{
            Try(1,1,s);
            if(dem==0) cout<<"-1";
            cout<<endl;
            dem=0;
        }
	}
}

