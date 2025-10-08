#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long x, sq;
		cin >> x;
		long double sqd = sqrtl(x);
		sq = (long long)sqd;
		if (abs(sqd - sq) > 0) cout << 0 << " ";
		else cout << 1 << " ";
	}
	return 0;
}