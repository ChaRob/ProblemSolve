#include <iostream>
#include <string>
using namespace std;

short dp[5000][5000];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	string board, consist;
	cin >> board >> consist;
	for (int i = 0; i < n; i++)
	{
		if (board[i] == consist[0])
			dp[0][i] = 1;
	}
	for (int i = 1; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			short prev = 0;
			if (j - 1 >= 0) prev = (prev > dp[i - 1][j - 1]) ? prev : dp[i - 1][j - 1];
			if (j + 1 < n) prev = (prev > dp[i - 1][j + 1]) ? prev : dp[i - 1][j + 1];

			if (board[j] == consist[i])
				prev++;
			dp[i][j] = prev;
		}
	}
	short maxVal = 0;
	for (int i = 0; i < n; i++)
	{
		maxVal = (maxVal > dp[m - 1][i]) ? maxVal : dp[m - 1][i];
	}
	cout << maxVal;
	return 0;
}