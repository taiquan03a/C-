#include<bits/stdc++.h>
using namespace std;
const int MAXQ=(int)1e9;
vector<bool> check(MAXQ+1,true);
void sang(){
    check[0]=check[1]=false;
    for(int i=2;i<=sqrt(MAXQ);i++){
        if(check[i]){
            for(int j=i*2;j<=MAXQ;j+=i){
                check[j]=false;
            }
        }
    }
}
int main(){

    sang();
    int a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(check[i]){
            long long sum=0;
            int tmp=i;
            int ok=1;
            while(tmp>0){
                int res=tmp%10;
                sum+=res;
                if(check[res]!=true){
                    ok=0;
                    break;
                }else tmp/=10;
            }
            if(check[sum] && ok) cnt++;
        }
    }
    cout<<cnt<<endl;
}