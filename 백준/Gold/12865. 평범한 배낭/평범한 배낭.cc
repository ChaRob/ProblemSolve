#include<iostream>
using namespace std;
unsigned int dp[101][100001] = { 0 };
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, w, v, maxw;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> w >> v;
		for (maxw = 1; maxw <= k; maxw++) {
			if (maxw >= w) {
				dp[i][maxw] = (dp[i - 1][maxw] > dp[i - 1][maxw - w] + v) ? dp[i - 1][maxw] : dp[i - 1][maxw - w] + v;
			}
			else {
				dp[i][maxw] = dp[i - 1][maxw];
			}
		}
	}
	cout << dp[n][k];
	return 0;
}