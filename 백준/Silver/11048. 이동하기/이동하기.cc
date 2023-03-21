#include<iostream>
using namespace std;
int miro[1000][1000] = { 0 };
int dp[1000][1000] = { 0 };
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> miro[i][j];
		}
	}
	dp[0][0] = miro[0][0];
	for (int i = 1; i < n; i++) {
		dp[i][0] = dp[i - 1][0] + miro[i][0];
	}
	for (int i = 1; i < m; i++) {
		dp[0][i] = dp[0][i - 1] + miro[0][i];
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			int tmp = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1];
			dp[i][j] = (dp[i - 1][j - 1] > tmp) ? dp[i - 1][j - 1] : tmp;
			dp[i][j] += miro[i][j];
		}
	}
	cout << dp[n - 1][m - 1];
	return 0;
}