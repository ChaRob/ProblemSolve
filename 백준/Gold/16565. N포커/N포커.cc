#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;

ll Gcd(ll a, ll b)
{
	while (b != 0)
	{
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ll MakeCombination(int n, int r)
{
	ll numerator = 1;
	ll denominator = 1;
	ll gcd;
	for (ll i = 0; i < r; i++)
	{
		numerator *= n - i;
		denominator *= i + 1;
		gcd = Gcd(numerator, denominator);
		numerator /= gcd;
		denominator /= gcd;
	}
	return numerator / denominator;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int t = n / 4;
	ll result = 0;
	for (int i = 1; i <= min(13, t); i++)
	{
		result += ((i % 2 == 1 ? 1 : -1) * MakeCombination(13, i) * MakeCombination(52 - 4 * i, n - 4 * i)) % 10007;
		result %= 10007;
		if (result < 0) result += 10007;
	}
	cout << result % 10007;
	return 0;
}