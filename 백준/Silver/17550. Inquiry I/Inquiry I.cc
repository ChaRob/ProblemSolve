#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<ll> a(n);
	ll sum = 0, powSum = 0, maxValue = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		powSum += a[i] * a[i];
		sum -= a[i];
		maxValue = (maxValue > sum * powSum) ? maxValue : sum * powSum;
	}
	cout << maxValue;
	return 0;
}