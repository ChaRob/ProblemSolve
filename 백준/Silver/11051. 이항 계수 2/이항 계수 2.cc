#include <iostream>
using namespace std;

unsigned short dp[1001][1001];

int Solve(const int& n, const int& k) {
    if (dp[n][k] != 0) return dp[n][k];

    if (n == k || k == 0) {
        dp[n][k] = 1;
        return 1;
    }
    
    dp[n][k] = (Solve(n - 1, k - 1) + Solve(n - 1, k)) % 10007;
    return dp[n][k];
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    cout << Solve(n, k);

    return 0;
}