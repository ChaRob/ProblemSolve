#include <iostream>
using namespace std;

using ll = long long;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	ll n, m;
	cin >> n >> m;
	ll ans = 1;
	if (n >= 1e7)
	{
		ans = 0;
	}
	else
	{
		for (ll i = 1; i <= n; i++)
		{
			ans = (ans * i) % m;
		}
	}
	cout << ans;
	return 0;
}