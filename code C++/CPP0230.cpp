#include<bits/stdc++.h>

using namespace std;

int main(){
	
		int n;
		cin>>n;
		int a[n][3];
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			}
		}
		int tmp=0;
		for(int i=0;i<n;i++){
			int res1=0,res2=0;
			for(int j=0;j<3;j++){
				if(a[i][j]==1) res1++;
				else res2++;	
			}
			if(res1>res2) tmp++;
		}
		cout<<tmp;
	}
