#include<bits/stdc++.h>

using namespace std;
int ok = 1,n,a[1005];
void Try(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else {
		a[i] = 1;
	}
}
main(){
    cin>>n;
    string s;
    vector<string> v;
    set<string> se;
    v.push_back("0");
    for(int i=1;i<=n;i++){
        cin>>s;
        v.push_back(s);
    }
    for(int i=1;i<=n;i++){
        a[i] = 0;
    }
    while(ok){
        string tmp ="";
        for(int i=1;i<=n;i++){
            if(a[i]){   
                tmp += v[i];
            }
        }
        Try();
        se.insert(tmp);
    }
    for(auto it:se){
        cout<<it<<endl;
    }
}
