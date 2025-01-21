#include <iostream>
using namespace std;

int W[301];

int solve(const int& n) {
	if (W[n] == 0) {
		if (n == 1) return 3;
		W[n] = solve(n - 1) + n * (n + 1) * (n + 2) / 2;
	}
	return W[n];
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> n;
		cout << solve(n) << "\n";
	}
	return 0;
}