#include <iostream>
#include <cmath>
using namespace std;

bool prime[101];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i * j <= n) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}