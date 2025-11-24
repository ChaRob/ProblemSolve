#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		double total = 0;
		for (int i = 0; i < n; i++)
		{
			double x, y;
			cin >> x >> y;
			double dist = x * x + y * y;
			for (int j = 1; j <= 10; j++)
			{
				if (dist <= pow(20 * j, 2))
				{
					total += 11 - j;
					break;
				}
			}
		}
		cout << (int)total << "\n";
	}
	return 0;
}