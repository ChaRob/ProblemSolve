#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int Q;
	cin >> Q;
	for (int t = 0; t < Q; t++)
	{
		int m;
		cin >> m;
		int min = 6;
		while (m >= 50)
		{
			m -= 50;
			min += 12;
		}
		int hour = 6 + (min / 60);
		min = min % 60;
		if (hour >= 24)
			cout << "-1\n";
		else
		{
			cout << setw(2) << setfill('0') << hour << ":";
			cout << setw(2) << setfill('0') << min << "\n";
		}
	}
	return 0;
}