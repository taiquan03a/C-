#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    long long result = 0; // dùng kiểu long long để tránh tràn số
    vector<long long> dp(N.length()); // lưu trữ các giá trị tính được cho các xâu con

    for (int i = 0; i < N.length(); i++) {
        long long num = 0; // dùng kiểu long long để tránh tràn số
        for (int j = i; j >= max(0, i - 17); j--) { // ta chỉ tính đến 17 chữ số trước để tránh tràn số
            num = num * 10 + (N[j] - '0');
            result += num;
            dp[i] += num + dp[j];
        }
    }

    cout << result - dp[N.length() - 1] << endl;
    return 0;
}
