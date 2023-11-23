#include <iostream>
constexpr int INF = 40000;
using namespace std;

int dp[10001];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int* coin = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    for (int i = 0; i <= k; i++)
    {
        dp[i] = INF;
    }
    dp[0] = 0;

    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + coin[j] > k) continue;

            if (dp[i] + 1 < dp[i + coin[j]]) {
                dp[i + coin[j]] = dp[i] + 1;
            }
        }
    }

    if (dp[k] >= INF) {
        dp[k] = -1;
    }
    cout << dp[k];
    delete[] coin;
    return 0;
}