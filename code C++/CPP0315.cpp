#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n.length();i++){
            v.push_back(n[i] - '0');
        }
        int i=v.size()-1;
        while(i>0 && v[i]>=v[i-1]){
            i--;
        }
        int ok=1;
        if(i==0) {
            cout<<"-1"<<endl;
            ok=0;
        }
        else{
            for(int j=v.size()-1;j>=i;j--){
                if(v[i-1] > v[j] && v[j]!=v[j-1]) {
                    swap(v[i-1],v[j]);
                    break;
                }
            }
        }
        if(ok){
            for(int i=0;i<v.size();i++){
                cout<<v[i];
            }
            cout<<endl;
        }
    }
}