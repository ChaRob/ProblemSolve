#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll sum = 0;
	ll n;
	cin >> n;
	for (ll i = 1; i < n; i++)
	{
		sum += i * n + i;
	}
	cout << sum;
	return 0;
}