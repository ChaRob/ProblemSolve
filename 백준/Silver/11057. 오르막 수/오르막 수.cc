#include<iostream>
#include<memory.h>
using namespace std;

int dp[1001][10];

int dfs(int n, int length, int prenum) {
	long long int sum = 0;
	if (length == n) {
		return dp[length][prenum] = 1;
	}

	if (dp[length][prenum] != -1) {
		return dp[length][prenum];
	}

	dp[length][prenum] = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i >= prenum) {
			sum += dfs(n, length + 1, i);
		}
	}
	return dp[length][prenum] = sum % 10007;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << dfs(n, 0, 0);

	return 0;
}