#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n, m;
	cin >> n >> m;
	ll trashes = 0;
	for (int i = 0; i < n; i++)
	{
		ll trash;
		cin >> trash;
		trashes += trash;
	}
	for (int i = 0; i < m; i++)
	{
		ll trash;
		cin >> trash;
		trashes += trash;
	}
	cout << trashes;
	return 0;
}