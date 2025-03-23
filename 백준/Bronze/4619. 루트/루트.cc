#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (true)
	{
		int b, n;
		cin >> b >> n;
		if (b == 0 && n == 0) break;

		int prev = 0, now;
		for (int i = 1; i <= 1000000; i++)
		{
			now = pow(i, n);
			if (now < b)
			{
				prev = now;
				continue;
			}
			if (now - b >= b - prev) cout << i - 1 << "\n";
			else cout << i << "\n";
			break;
		}
	}
	return 0;
}