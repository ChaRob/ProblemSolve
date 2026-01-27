#include <iostream>
using namespace std;

using ll = long long;

ll GetSum(ll n)
{
	if (n % 2 == 0)
		return (n + 1) * (n / 2);
	else
		return ((n + 1) / 2) * n;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		cout << "Scenario #" << t << ":\n";
		ll n, m, ans;
		cin >> n >> m;
		if (m < 0)
			ans = -(GetSum(-n) - GetSum(-m - 1));
		else if (n <= 0)
			ans = GetSum(m) - GetSum(-n);
		else
			ans = GetSum(m) - GetSum(n - 1);
		cout << ans << "\n\n";
	}
	return 0;
}