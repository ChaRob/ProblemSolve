#include <iostream>
using namespace std;

using ll = long long;

static ll Pow(ll r)
{
	return r * r;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	ll energy = 0, now;
	cin >> now;
	for (int i = 1; i < n; i++)
	{
		ll station;
		cin >> station;
		energy += Pow(station - now);
		now = station;
	}
	cout << energy;
	return 0;
}