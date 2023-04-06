#include<iostream>
using namespace std;

int house[32][32];
long long dp[32][32][3];

long long move(int x, int y, int dir, int n) {
	long long tmp = 0;

	if (x == n - 1 && y == n - 1) {
		dp[x][y][dir] = 1;
		return dp[x][y][dir];
	}

	if (dp[x][y][dir] != -1) {
		return dp[x][y][dir];
	}

	if (dir <= 1 && y + 1 < n && house[x][y + 1] != 1) {
		tmp += move(x, y + 1, 0, n);
	}
	if (x + 1 < n && y + 1 < n && house[x][y + 1] != 1 && house[x + 1][y] != 1 && house[x + 1][y + 1] != 1) {
		tmp += move(x + 1, y + 1, 1, n);
	}
	if (dir >= 1 && x + 1 < n && house[x + 1][y] != 1) {
		tmp += move(x + 1, y, 2, n);
	}
	dp[x][y][dir] = tmp;
	return tmp;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cin >> house[i][j];
			for (size_t k = 0; k < 3; k++)
			{
				dp[i][j][k] = -1;
			}
		}
	}
	cout << move(0, 1, 0, n);
	return 0;
}