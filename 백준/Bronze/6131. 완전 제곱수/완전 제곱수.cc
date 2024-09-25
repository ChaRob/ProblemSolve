#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			int row = i, high = n / i;
			for (int B = high - 1; B >= 1; B--)
			{
				int A = high - B;
				if (B - A == row) cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}