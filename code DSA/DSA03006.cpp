#include<bits/stdc++.h>

using namespace std;

string calc(vector<int> &a, vector<int> &b){
    for(int i = 0; i < a.size(); ++i) if(a[i] != b[i] and a[i] != b[a.size() - i - 1]) return "No";
        return "Yes";
}

int main(){
    int t = 1, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n), b(n);
        for(int &i : a) cin >> i;
        b = a;
        sort(b.begin(),b.end());
        cout << calc(a, b) << endl;
    }
    return 0;
}