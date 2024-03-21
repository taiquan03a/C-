#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        set<string> v1,v2;
        vector<string> ve1,ve2;
        stringstream ss1(a),ss2(b);
        string tmp1,tmp2;
        while(ss1>>tmp1){
            v1.insert(tmp1);
        }
        while(ss2>>tmp2){
            v2.insert(tmp2);
        }
        for(string x:v1){
            ve1.push_back(x);
        }
        for(string y:v2){
            ve2.push_back(y);
        }
        for(int i=0;i<ve1.size();i++){
            int ok=1;
            for(int j=0;j<ve2.size();j++){
                if(ve1[i] == ve2[j]) {
                    ok=0;
                    break;
                }
            }
            if(ok) cout<<ve1[i]<<" ";
        }
        cout<<endl;

    }
}