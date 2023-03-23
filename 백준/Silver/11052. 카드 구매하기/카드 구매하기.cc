#include<iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    int p[1001] = { 0 };
    int dp[1001] = { 0 };
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        for (int j = 1; j <= i; j++) {
            dp[i] = (dp[i - j] + p[j] > dp[i]) ? dp[i - j] + p[j] : dp[i];
        }
    }
    cout << dp[n];
    return 0;
}