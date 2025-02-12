#include <iostream>
#include <cmath>
using namespace std;

int fac[10] = { 1 };

int factorialCal(const int& n) {
	if (fac[n] == 0) {
		fac[n] = factorialCal(n - 1) * n;
	}
	return fac[n];
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, digit, val, res;
	while (true)
	{
		cin >> n;
		if (n == 0) break;
		digit = 1;
		res = 0;
		while (n > 0)
		{
			val = n % 10;
			res += val * factorialCal(digit);
			n /= 10;
			digit++;
		}
		cout << res << "\n";
	}
	return 0;
}