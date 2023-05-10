#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, m, k, tmp, i, j, x, y;
	cin >> n >> m;
	int **dp = new int*[n+1];
	for (i = 0; i <= n; i++)
	{
		dp[i] = new int[m+1] {0};
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			cin >> tmp;
			dp[i][j] = tmp + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
		}
	}
	cin >> k;
	for (int k_i = 0; k_i < k; k_i++)
	{
		cin >> i >> j >> x >> y;
		cout << dp[x][y] - dp[x][j-1] - dp[i-1][y] + dp[i-1][j-1] << "\n";
	}

	for (i = 0; i <= n; i++)
	{
		delete[] dp[i];
	}
	delete[] dp;
	return 0;
}