#include <iostream>
using namespace std;

int ans[101];

int solve(const int& n) {
	if (n == 1) ans[n] = 1;

	if (ans[n] == 0) {
		ans[n] = n * n + solve(n - 1);
	}
	return ans[n];
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	while (cin >> n)
	{
		if (n == 0) break;
		cout << solve(n) << "\n";
	}
	return 0;
}