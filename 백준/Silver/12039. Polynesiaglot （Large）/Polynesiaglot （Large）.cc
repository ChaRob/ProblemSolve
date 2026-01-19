#include <iostream>
using namespace std;

using ll = long long;
const ll mods = 1e9 + 7;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		ll c, v, l;
		cin >> c >> v >> l;
		ll dp[500][2] = {};
		dp[0][0] = v;
		dp[0][1] = c;
		for (int i = 1; i < l; i++)
		{
			dp[i][0] += dp[i - 1][0] * v + dp[i - 1][1] * v;
			dp[i][1] += dp[i - 1][0] * c;

			dp[i][0] %= mods;
			dp[i][1] %= mods;
		}
		cout << "Case #" << t << ": " << dp[l - 1][0] % mods << "\n";
	}
	return 0;
}