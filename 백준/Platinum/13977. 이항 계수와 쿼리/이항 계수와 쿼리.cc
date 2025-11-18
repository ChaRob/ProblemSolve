#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;
ll fact[4000001];
ll mod = 1000000007;

ll Multiply(ll a, ll b)
{
	if (b == 0) return 0;
	if (b == 1) return a;
	ll half = Multiply(a, b / 2) % mod;
	ll res = (half * half) % mod;
	if (b % 2)
		return (res * a) % mod;
	else
		return res;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	fact[0] = 1;
	for (int i = 1; i <= 4000000; i++)
	{
		fact[i] = (fact[i - 1] * i) % mod;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		ll n, k;
		cin >> n >> k;
		cout << (fact[n] * Multiply(fact[k] * fact[n - k] % mod, mod - 2)) % mod << "\n";
	}
	return 0;
}