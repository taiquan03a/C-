#include<bits/stdc++.h>

using namespace std;
int n,m,ok=1;
int a[101];
int s[101];
int tmp[4] = {2,3,5,7};
void khoitao(){
	cin>>n;
	int c=0;
	for(int i=1;i<=n;i++){
		s[i] = tmp[c];
		c++;
		if(c==4) c=0;
	}
}
void Try(){
	int i=n;
	while(i>=1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		int j=n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	khoitao();
	while(ok){
		for(int i=1;i<=n;i++){
			if(s[a[n]]%2 != 0) cout<<s[a[i]];
		}
		cout<<endl;
		Try();
	}
}

// 5 4 1 2 3 
// 5 3 4 2 1
// 5 3 4 1 2
// 5 3 2 4 1
// 5 3 2 1 4
// 5 4 3 2 1
