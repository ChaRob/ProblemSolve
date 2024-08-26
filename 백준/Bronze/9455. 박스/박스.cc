#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	int grid[100][100] = {};
	for (int t = 0; t < T; t++)
	{
		int m, n, cnt = 0;
		cin >> m >> n;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> grid[i][j];
			}
		}

		for (int i = 0; i < n; i++)
		{
			int up = 0, down = m - 1;
			while (up <= down)
			{
				if (grid[down][i] != 0) {
					down--;
					continue;
				}
				if (grid[up][i] == 1) {
					grid[down][i] = 1;
					grid[up][i] = 0;
					cnt += down - up;
				}
				up++;
			}
		}

		cout << cnt << "\n";
	}
	return 0;
}