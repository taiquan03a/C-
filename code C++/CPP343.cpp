#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    getchar();
    while(t--){
        
        string s,tmp,res;
        vector<string> v;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>tmp){
            res+=tmp;
        }
        if(res.length()%2==0){
            int le=0,chan=0;
            for(int i=0;i<res.length();i++){
                if((res[i]-'0')%2==0) chan++;
                else le++;
            }
            if(chan>le) cout<<"YES";
            else cout<<"NO";
        }else{
            int le=0,chan=0;
            for(int i=0;i<res.length();i++){
                if((res[i]-'0')%2==0) chan++;
                else le++;
            }
            if(chan<le) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
}
