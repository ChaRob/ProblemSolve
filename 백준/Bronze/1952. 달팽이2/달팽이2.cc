#include <iostream>
using namespace std;

int main()
{
	int m, n, cnt = 0;
	cin >> m >> n;
	bool** grid = new bool*[m];
	int dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
	for (int i = 0; i < m; i++)
	{
		grid[i] = new bool[n];
		for (int j = 0; j < n; j++)
		{
			grid[i][j] = true;
		}
	}
	int px = 0, py = 0, idx = 0, stack = m * n - 1;
	grid[px][py] = false;
	while (true)
	{
		int nx = px + dir[idx][0], ny = py + dir[idx][1];
		if (0 <= nx && nx < m && 0 <= ny && ny < n && grid[nx][ny]) {
			grid[nx][ny] = false;
			px = nx; py = ny;
			stack--;
			if (stack == 0) break;
		}
		else {
			idx++;
			if (idx == 4) idx = 0;
			cnt++;
		}
	}

	cout << cnt;
	for (int i = 0; i < m; i++)
	{
		delete[] grid[i];
	}
	delete[] grid;
	return 0;
}