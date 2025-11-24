#include <iostream>
using namespace std;

int sum[1025][1025];

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int num;
			cin >> num;
			sum[i][j] = sum[i][j - 1] + num;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int w;
		cin >> w;
		if (w == 0)
		{
			int x, y, origin, c, diff;
			cin >> x >> y >> c;
			origin = sum[x][y] - sum[x][y - 1];
			diff = c - origin;
			for (int i = y; i <= n; i++)
			{
				sum[x][i] += diff;
			}
		}
		else
		{
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			int ans = 0;
			for (int i = x1; i <= x2; i++)
			{
				ans += sum[i][y2] - sum[i][y1 - 1];
			}
			cout << ans << '\n';
		}
	}
	return 0;
}