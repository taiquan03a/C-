#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,p;
	cin>>n>>m>>p;
	int a[n][m],b[m][p],result[n][p];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++) cin>>a[i][j];
	for(int i=0;i<m;i++)
	for(int j=0;j<p;j++) cin>>b[i][j];
	for(int i=0;i<n;++i)
        {
            for(int j=0;j<p;++j)
            {
                result[i][j]=0;
                for(int k=0;k<m;++k)
                    result[i][j]=result[i][j]+(a[i][k]*b[k][j]);
                        cout<<result[i][j]<<" ";
                       
            }
            
            cout<<endl;
        }
}
