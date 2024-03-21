#include<bits/stdc++.h>

using namespace std;
int n,k;
int mod = 1e9+7;
struct matrix{
	long long a[101][101];
	friend matrix operator * (matrix x, matrix y){
		matrix kq;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				kq.a[i][j]=0;
				for(int k=0;k<n;k++){
					kq.a[i][j] += x.a[i][k]*y.a[k][j];
					kq.a[i][j] %= mod;
				}
			}
		}
		return kq;
	}
};

matrix modPow(matrix x,long long k){
	if(k==1) return x;
	matrix y = modPow(x,k/2);
	if(k % 2 == 0) return y*y;
	else return y*y*x;
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		matrix X;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>X.a[i][j];
			}
		}
		matrix y = modPow(X,k);
		long long sum=0; 
//		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				sum  += y.a[j][n-1];
				sum%=mod; 
			}
			cout<<sum<<endl;
		}
//	}
}
