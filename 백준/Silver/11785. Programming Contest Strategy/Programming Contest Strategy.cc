#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int n, l, problem = 0, lastHour = 0, totalHour = 0;
		cin >> n >> l;
		vector<int> times(n);
		for (int i = 0; i < n; i++)
		{
			cin >> times[i];
		}
		sort(times.begin(), times.end());
		for (int i = 0; i < n; i++)
		{
			if (lastHour + times[i] > l)
				break;
			problem = i + 1;
			lastHour += times[i];
			totalHour += lastHour;
		}
		cout << "Case " << t << ": " << problem << " " << lastHour << " " << totalHour << "\n";
	}
	return 0;
}