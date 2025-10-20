#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int min = 0, max = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			min += 15;
			max += 20;
		}
		if (i >= 2)
		{
			// side + pillar
			min += 10 * 2 + 3;
			max += 18 * 2 + 11;
		}
		if (i >= 3)
		{
			min += (i - 2) * 8;
			max += (i - 2) * 27;
		}
	}
	cout << min + max;
	return 0;
}