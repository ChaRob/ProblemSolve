#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n, q;
	cin >> n >> q;
	ll minPrice = static_cast<ll>(1) << 62, minIndex = 1;
	for (int i = 1; i <= n; i++)
	{
		ll p, k, c;
		cin >> p >> k >> c;
		ll time = ceil((double)q / k) - 1;
		ll price = p + time * (time + 1) / 2 * c;
		if (price < minPrice)
		{
			minPrice = price;
			minIndex = i;
		}
	}
	cout << minIndex << " " << minPrice;
	return 0;
}