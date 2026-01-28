#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

using ll = long long;

const ll MAX_VALUE = 1000000;
bool isPrime[MAX_VALUE + 1];

ll Gcd(ll a, ll b)
{
	ll tmp;
	while (b > 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

ll Lcm(ll a, ll b)
{
	return a * b / Gcd(a, b);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	set<ll> primes;
	for (int i = 0; i <= MAX_VALUE; i++)
	{
		isPrime[i] = true;
	}
	for (int i = 2; i <= int(sqrt(MAX_VALUE) + 1); i++)
	{
		if (isPrime[i])
		{
			int j = 2;
			while (i * j <= MAX_VALUE)
			{
				isPrime[i * j] = false;
				j += 1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (isPrime[a])
			primes.insert(a);
	}
	if (primes.size() == 0)
		cout << -1;
	else
	{
		ll result = 1;
		for (ll var : primes)
		{
			result = Lcm(result, var);
		}
		cout << result;
	}
	return 0;
}