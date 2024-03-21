#include<bits/stdc++.h>

using namespace std;

int main(){
    int t = 1, n;
    int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    cin >> t;
    long long x;
    while(t--){
        cin >> n;
        int cnt = 0, i = 9;
        while(n){
            cnt += n / a[i];
            n %= a[i];
            --i;
        }
        cout << cnt << endl;
    }
    return 0;
}