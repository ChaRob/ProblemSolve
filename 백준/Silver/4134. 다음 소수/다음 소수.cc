#include<iostream>
using namespace std;

typedef long long ll;

bool IsPrimes(ll n) {
	if (n == 0 or n == 1) return false;
	for (ll i = 2; i*i <= n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		ll n;
		cin >> n;
		while (!IsPrimes(n)) {
			n++;
		}
		cout << n << "\n";
	}
	return 0;
}