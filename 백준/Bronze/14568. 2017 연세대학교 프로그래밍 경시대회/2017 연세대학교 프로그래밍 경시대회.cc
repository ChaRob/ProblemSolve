#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int a = 2; a <= n; a+=2)
	{
		for (int b = 1; b <= n - a; b++)
		{
			for (int c = 1; c <= n - a - b; c++)
			{
				if (a + b + c != n ||
					b + 2 > c)
					continue;
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}