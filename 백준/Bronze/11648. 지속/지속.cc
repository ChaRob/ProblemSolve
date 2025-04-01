#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, step = 0;
	cin >> n;
	while (n / 10)
	{
		int one = 1;
		while (n > 0)
		{
			int res = n % 10;
			one *= res;
			n /= 10;
		}
		n = one;
		step++;
	}
	cout << step;
	return 0;
}