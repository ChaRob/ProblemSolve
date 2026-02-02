#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n, k;
	cin >> n >> k;
	vector<ll> sums(n);
	for (int i = 0; i < n; i++)
	{
		ll point;
		cin >> point;
		if (i == 0)
			sums[0] = point;
		else
			sums[i] += sums[i - 1] + point;
	}
	sort(sums.begin(), sums.end(), greater<ll>());
	ll res = 0;
	for (size_t i = 0; i < k; i++)
	{
		res += sums[i];
	}
	cout << res;
	return 0;
}