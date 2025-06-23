#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int sx, sy, ex, ey;
	cin >> sx >> sy;
	cout << sx << " " << sy << "\n";
	float minDist = 999999;
	for (int i = 0; i < n - 1; i++)
	{
		int x, y;
		cin >> x >> y;
		float dist = sqrt(pow(sx - x, 2) + pow(sy - y, 2));
		if (dist < minDist)
		{
			minDist = dist;
			ex = x;
			ey = y;
		}
	}
	cout << ex << " " << ey << "\n";
	cout << fixed << setprecision(2) << minDist;
	return 0;
}