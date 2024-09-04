#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, l, d;
	cin >> n >> l >> d;
	int shortTime = 0, time = 0;
	for (int i = 1; i <= n; i++)
	{
		int minT = l * i + 5 * (i-1);
		int maxT = minT + 4;
		while (time <= maxT) {
			if (minT <= time && time <= maxT) {
				shortTime = time;
				break;
			}
			time += d;
		}
		if (shortTime != 0) break;
	}
	if (shortTime == 0) shortTime = time;
	cout << shortTime;
	return 0;
}