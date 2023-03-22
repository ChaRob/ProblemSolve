#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k, dp[2] = { 0, 1 }, tmp;
	cin >> k;
	for (int i = 1; i < k; i++) {
		tmp = dp[0] + dp[1];
		dp[0] = dp[1];
		dp[1] = tmp;
	}
	cout << dp[0] << " " << dp[1];
	return 0;
}