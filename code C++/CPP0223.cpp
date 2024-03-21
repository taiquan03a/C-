#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
        int c1=0,c2=m-1,h1=0,h2=n-1;
        int cnt=1;
        while(c1<=c2 && h1<=h2){
            int pre = a[h1][c1];
            for(int i=c1;i<=c2;i++){
                cout<<a[h1][i]<<" ";
                cnt++;
                if(cnt==m+1) {
                    cout<<endl;
                    cnt=1;
                }
            }
            h1++;
            for(int i = h1;i <= h2;i++){
                cout<<a[i][c2]<<" ";
                                cnt++;
                if(cnt==m+1) {
                    cout<<endl;
                    cnt=1;
                }
            }
            c2--;
            if(h1<=h2){
                for(int i = c2;i >= c1;i--){
                    cout<<a[h2][i]<<" ";
                                    cnt++;
                if(cnt==m+1) {
                    cout<<endl;
                    cnt=1;
                }
                }
                h2--;
            }
            if(c1<=c2){
                for(int i = h2;i >= h1;i--){
                    cout<<a[i][c1]<<" ";
                                    cnt++;
                if(cnt==m+1) {
                    cout<<endl;
                    cnt=1;
                }
                }
                c1++;
            }
        }
        cout<<endl;
    }
}
// 1  2  3  4
// 5  6  7  8
// 9  10 11 12

// 1  2  3  4
// 8  12 11 10
// 9  5  6  7