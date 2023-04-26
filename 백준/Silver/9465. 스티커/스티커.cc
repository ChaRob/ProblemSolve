#include<iostream>
using namespace std;

int arr[2][100001] = { 0 }, dp[2][100001] = { 0 };

int maxv(int a, int b) {
	return (a > b) ? a : b;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (size_t t = 0; t < T; t++)
	{
		cin >> n;
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 1; j <= n; j++)
			{
				cin >> arr[i][j];
			}
		}
		dp[0][1] = arr[0][1];
		dp[1][1] = arr[1][1];

		for (size_t i = 2; i <= n; i++)
		{
			dp[0][i] = maxv(dp[1][i - 1], dp[1][i - 2]) + arr[0][i];
			dp[1][i] = maxv(dp[0][i - 1], dp[0][i - 2]) + arr[1][i];
		}
		cout << maxv(dp[0][n], dp[1][n]) << "\n";
	}
	return 0;
}