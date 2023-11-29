#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int* dp = new int[n+1];
    dp[0] = 1; dp[1] = 3;
    
    for (int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % 9901;
    }
    cout << dp[n];
    delete[] dp;
    return 0;
}