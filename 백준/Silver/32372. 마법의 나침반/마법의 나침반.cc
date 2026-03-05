#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	int minX = 1, maxX = n;
	int minY = 1, maxY = n;
	for (int i = 0; i < m; i++)
	{
		int x, y, k;
		cin >> x >> y >> k;
		// x coordinate
		if (k == 1 || k == 2 || k == 8)
			maxX = (maxX > x - 1) ? x - 1 : maxX;
		else if (k == 4 || k == 5 || k == 6)
			minX = (minX > x + 1) ? minX : x + 1;
		else
		{
			minX = x;
			maxX = x;
		}
		// y coordinate
		if (k == 2 || k == 3 || k == 4)
			minY = (minY > y + 1) ? minY : y + 1;
		else if (k == 6 || k == 7 || k == 8)
			maxY = (maxY > y - 1) ? y - 1 : maxY;
		else
		{
			minY = y;
			maxY = y;
		}
	}
	cout << (minX + maxX) / 2 << " " << (minY + maxY) / 2;
	return 0;
}