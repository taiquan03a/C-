#include<bits/stdc++.h>

using namespace std;
int check (int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
//void swap(int a,int b){
//	int tmp=a;
//	a=b;
//	b=tmp;
//}
int main(){
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	    	int tmp=a;
	    	a=b;
	    	b=tmp;
		}
	    for(long long i=a;i<=b;i++){
	        if(check(i)) cout<<i<<" ";
	    }
	    cout<<endl;
	}
}
