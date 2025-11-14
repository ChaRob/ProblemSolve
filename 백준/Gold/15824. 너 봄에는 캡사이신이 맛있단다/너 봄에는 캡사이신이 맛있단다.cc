#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;
const ll remain = 1000000007;

ll ExPro(ll& n, ll d, ll ex)
{
	if (ex == 0) return 1;

	ll part = ExPro(n, d, ex / 2);
	ll res = part * part;
	if (ex % 2) res *= d;
	return res % remain;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	ll n;
	cin >> n;
	vector<ll> scobils(n);
	ll pain = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> scobils[i];
	}
	sort(scobils.begin(), scobils.end());
	for (int i = 0; i < n; i++)
	{
		pain = (pain + scobils[i] * (ExPro(n, 2, i) - ExPro(n, 2, n - i - 1))) % remain;
	}
	cout << pain;
	return 0;
}