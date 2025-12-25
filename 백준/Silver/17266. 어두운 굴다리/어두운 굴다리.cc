#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m, height = 0;
	cin >> n >> m;
	vector<int> streetlamp(m + 2);
	streetlamp[0] = 0;
	streetlamp[m + 1] = n;
	for (int i = 1; i <= m; i++)
	{
		if (i < m + 1) cin >> streetlamp[i];
		int gap = ceil((float)(streetlamp[i] - streetlamp[i - 1]) / 2);
		height = (height > gap) ? height : gap;
	}
	height = (height > streetlamp[1]) ? height : streetlamp[1];
	height = (height > n - streetlamp[m]) ? height : n - streetlamp[m];
	cout << height;
	return 0;
}