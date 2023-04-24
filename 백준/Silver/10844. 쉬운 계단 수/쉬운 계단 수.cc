#include<iostream>
#include<memory.h>
using namespace std;
typedef long long ll;

ll dp[100][10];

ll find_stair(int n, int now_len, int start) {
	if (now_len == n) {
		return 1;
	}

	if (dp[now_len][start] != -1) {
		return dp[now_len][start];
	}

	dp[now_len][start] = 0;
	if (start + 1 <= 9) {
		dp[now_len][start] = (dp[now_len][start] + find_stair(n, now_len + 1, start + 1)) % 1000000000;
	}
	if (start - 1 >= 0) {
		dp[now_len][start] = (dp[now_len][start] + find_stair(n, now_len + 1, start - 1)) % 1000000000;
	}

	return dp[now_len][start];
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, res = 0;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	
	for (size_t i = 1; i <= 9; i++)
	{
		res = (res + find_stair(n, 1, i)) % 1000000000;
	}
	cout << res;
	return 0;
}