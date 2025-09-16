#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int ans = 0, least = 9999;
	for (int t = 1; t <= n; t++)
	{
		int j, m;
		cin >> j >> m;
		int r = (j - 1) % (m + 1);
		int res = (j - r) / m * 2 + 2;
		if (res < least)
		{
			least = res;
			ans = t;
		}
	}
	cout << ans << " " << least;
	return 0;
}