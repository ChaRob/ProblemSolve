#include<iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, dp[1001] = { 0 }, arr[1001] = { 0 }, j, maxcnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[i] = 1;
        for (j = i - 1; j > 0; j--) {
            if (arr[i] > arr[j]) {
                dp[i] = (dp[i] > dp[j] + 1) ? dp[i] : dp[j] + 1;
            }
        }
        maxcnt = (maxcnt > dp[i]) ? maxcnt : dp[i];
    }
    cout << maxcnt;
    return 0;
}