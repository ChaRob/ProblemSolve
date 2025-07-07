#include <iostream>
using namespace std;

int delta[4][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, n, chocolate, turns = 0;
	cin >> m >> n;
	int arr[100][100] = { 0 };
	chocolate = m * n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 1;
		}
	}
	int x = 0, y = 0, dir = 0;
	while (chocolate > 0)
	{
		if (arr[x][y] > 0)
		{
			arr[x][y] = 0;
			chocolate--;
		}

		int nx = x + delta[dir][0];
		int ny = y + delta[dir][1];
		if (nx >= m || nx < 0 || ny >= n || ny < 0 || arr[nx][ny] == 0)
		{
			if (chocolate == 0) continue;
			dir = (dir + 1) % 4;
			turns++;
		}
		else
		{
			x = nx;
			y = ny;
		}
	}
	cout << turns;
	return 0;
}