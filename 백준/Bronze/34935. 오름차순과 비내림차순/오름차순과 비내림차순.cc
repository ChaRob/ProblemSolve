#include <iostream>
using namespace std;

using ll = long long;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n, now = -9223372036854775807 - 1;
	cin >> n;
	bool check = true;
	for (int i = 0; i < n; i++)
	{
		ll a;
		cin >> a;
		if (now >= a)
		{
			check = false;
			break;
		}
		now = a;
	}
	if (check)
		cout << 1;
	else
		cout << 0;
	return 0;
}