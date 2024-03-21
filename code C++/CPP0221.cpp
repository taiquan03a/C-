#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int c1=0,c2=m-1,h1=0,h2=n-1;
		while(c1<c2 && h1<h2){
			int tmp = a[h1+1][c1];
			for(int i=c1;i<=c2;i++){
				int cur = a[h1][i];
				a[h1][i] = tmp;
				tmp = cur;
			}
			h1++;
			for(int i=h1; i <= h2 ;i++){
				int cur = a[i][c2];
				a[i][c2] = tmp;
				tmp = cur;
			}
			c2--;
			if(h1<=h2){
				for(int i = c2;i >= c1;i--){
					int cur = a[h2][i];
					a[h2][i] = tmp;
					tmp = cur;
				}
				h2--;
			}
			if(c1<=c2){
				for(int i = h2;i >= h1;i--){
					int cur = a[i][c1];
					a[i][c1] = tmp;
					tmp = cur;
				}
				c1++;
			}
		}
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
	}
}

//1 2 3 4
//5 6 7 8 
//9 10 11 12
//13 14 15 16

//5 1 2 3
//9 10 6 4
//13 11 7 8
//14 15 16 12
