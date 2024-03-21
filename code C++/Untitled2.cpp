#include<bits/stdc++.h>

using namespace std;
int n,a[100];
void khoitao(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
void Try(){
	int i=n;
	while(i>=1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0){
        for(int h=1;h<=n;h++){
            a[h]=h;
        }
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
    Try();
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}    
}
