#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

long long calc(int n, int k)
{
    vector<long long> invert(k + 5, 0);
    invert[0] = 1;
    if(k + 1 >= 2) invert[1] = 1;
    for(int i=2;i<=k;i++) invert[i] = mod - (mod / i) * invert[mod % i] % mod;
    long long res = 1;
    for(int i=2;i<=k;i++) res = ((res % mod) * (invert[i] % mod)) % mod;
    long long ed = n - k + 1;
    for(int i=n;i>=ed;i--) res = ((res % mod) * (i % mod)) % mod;
    return res;
}

int main()
{
    int t = 1, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << calc(n, k) << endl;
    }
    return 0;
}