#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	int stair = m + 1;
	int minDist = 999, minI = 1;
	for (int i = 1; i <= k; i++)
	{
		int f, d;
		cin >> f >> d;
		int dist = stair - d + f - 1;
		if (dist < minDist)
		{
			minDist = dist;
			minI = i;
		}
	}
	cout << minI;
	return 0;
}