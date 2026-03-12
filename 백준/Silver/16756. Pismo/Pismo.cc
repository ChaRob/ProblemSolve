#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, min = 1e9;
	cin >> n;
	int prev;
	cin >> prev;
	for (int i = 1; i < n; i++)
	{
		int val, now;
		cin >> val;
		if (val > prev)
			now = val - prev;
		else
			now = prev - val;
		min = (min < now) ? min : now;
		prev = val;
	}
	cout << min;
	return 0;
}