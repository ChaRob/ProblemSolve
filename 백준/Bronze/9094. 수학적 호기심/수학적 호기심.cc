#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, cnt, T, a, b;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> n >> m;
		cnt = 0;
		for (a = 1; a < n - 1; a++)
		{
			for (b = a + 1; b < n; b++)
			{
				if ((a * a + b * b + m) % (a * b) == 0) cnt++;
			}
		}
		cout << cnt << "\n";
	}
	return 0;
}