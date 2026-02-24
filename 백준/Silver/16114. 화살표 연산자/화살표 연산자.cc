#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x, n;
	cin >> x >> n;
	if (n > 1 && n % 2)
		cout << "ERROR";
	else if (n == 0 && x > 0)
		cout << "INFINITE";
	else
	{
		int c = n / 2, cnt = 0;
		if (n == 1)
		{
			x = -x;
			if (x > 0)
			{
				cout << "INFINITE";
				return 0;
			}
		}
		while ((x - c) > 0)
		{
			cnt++;
			x -= c;
		}
		cout << cnt;
	}
	return 0;
}