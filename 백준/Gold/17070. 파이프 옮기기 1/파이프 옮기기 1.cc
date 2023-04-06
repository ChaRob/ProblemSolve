#include<iostream>
using namespace std;

int house[16][16];
int dp[16][16];

int move(int x, int y, int dir, int n) {
	int tmp = 0;

	if (x == n - 1 && y == n - 1) {
		dp[x][y] = 1;
		return dp[x][y];
	}

	/*if (dp[x][y] != -1) {
		return dp[x][y];
	}*/

	if (dir <= 1 && y + 1 < n && house[x][y + 1] != 1) {
		tmp += move(x, y + 1, 0, n);
	}
	if (dir >= 1 && x + 1 < n && house[x + 1][y] != 1) {
		tmp += move(x + 1, y, 2, n);
	}
	if (x + 1 < n && y + 1 < n && house[x][y + 1] != 1 && house[x + 1][y] != 1 && house[x + 1][y + 1] != 1) {
		tmp += move(x + 1, y + 1, 1, n);
	}
	dp[x][y] = tmp;
	return dp[x][y];
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, res;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> house[i][j];
			dp[i][j] = -1;
		}
	}
	res = move(0, 1, 0, n);
	cout << res;
	return 0;
}