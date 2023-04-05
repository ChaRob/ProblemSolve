#include<iostream>
#include<vector>
#include<memory.h>
using namespace std;

int direct[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int roadmap[500][500];
int dp[500][500];

int dfs(int start_x, int start_y, int n, int m) {
	if (start_x == n - 1 && start_y == m - 1) {
		return 1;
	}
	if (dp[start_x][start_y]!=-1) {
		return dp[start_x][start_y];
	}
	dp[start_x][start_y] = 0;
	for (size_t i = 0; i < 4; i++)
	{
		int nx = start_x + direct[i][0], ny = start_y + direct[i][1];
		if (0 <= nx && nx < n && 0 <= ny && ny < m) {
			if (roadmap[nx][ny] < roadmap[start_x][start_y]) {
				dp[start_x][start_y] += dfs(nx, ny, n, m);
			}
		}
	}
	return dp[start_x][start_y];
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, n;
	cin >> n >> m;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> roadmap[i][j];
		}
	}
	memset(dp, -1, sizeof(dp));
	cout << dfs(0, 0, n, m);
	return 0;
}