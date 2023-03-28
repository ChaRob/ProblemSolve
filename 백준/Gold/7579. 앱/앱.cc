#include<iostream>
using namespace std;
long int dp[101][10001] = { 0 };
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N, M, m, c, res = 10001;
	cin >> N >> M;
	long int app_m[101] = { 0 };
	int app_c[101] = { 0 };
	for (int i = 1; i <= N; i++) {
		cin >> m;
		app_m[i] = m;
	}
	for (int i = 1; i <= N; i++) {
		cin >> c;
		app_c[i] = c;
	}
	for (int i = 1; i <= N; i++) {
		for (int max_c = 0; max_c <= 10000; max_c++) {
			if (max_c >= app_c[i]) {
				dp[i][max_c] = (dp[i - 1][max_c] > dp[i - 1][max_c - app_c[i]] + app_m[i]) ? dp[i - 1][max_c] : dp[i - 1][max_c - app_c[i]] + app_m[i];
			}
			dp[i][max_c] = (dp[i][max_c] > dp[i - 1][max_c]) ? dp[i][max_c] : dp[i - 1][max_c];
			if (dp[i][max_c] >= M) {
				res = (res < max_c) ? res : max_c;
			}
		}
	}
	cout << res;
	return 0;
}