#include<iostream> 

using namespace std; 

int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		int n; 
		cin>>n;
		int a[n]; 
		for(int i=0;i<n;i++){ 
			cin>>a[i]; 
		} 
		int k=1; 
		while(true){ 
			int stop=1; 
			for(int i=0;i<n;i++){ 
				if(a[i]==k){ 
					stop=0; 
					break; 
				} 
			} 
			if(stop==1){ 
				cout<<k; 
				break; 
			} 
			else{ 
				k++; 
			} 
		} 
		cout<<endl; 
	} 
	return 0; 
}
