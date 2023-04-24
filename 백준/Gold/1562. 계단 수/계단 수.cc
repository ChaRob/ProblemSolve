#include<iostream>
#include<memory.h>
using namespace std;
typedef long long ll;

ll dp[100][10][1<<10];

ll find_stair(int n, int now_len, int start, int nums) {
	if (now_len == n) {
		if (nums == (1 << 10) - 1) {
			return 1;
		}
		else {
			return 0;
		}
	}

	if (dp[now_len][start][nums] != -1) {
		return dp[now_len][start][nums];
	}

	dp[now_len][start][nums] = 0;
	if (start + 1 <= 9) {
		dp[now_len][start][nums] = (dp[now_len][start][nums] + find_stair(n, now_len + 1, start + 1, nums | (1 << (start + 1)))) % 1000000000;
	}
	if (start - 1 >= 0) {
		dp[now_len][start][nums] = (dp[now_len][start][nums] + find_stair(n, now_len + 1, start - 1, nums | (1 << (start - 1)))) % 1000000000;
	}

	return dp[now_len][start][nums];
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, res = 0;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	
	for (size_t i = 1; i <= 9; i++)
	{
		res = (res + find_stair(n, 1, i, (1 << i))) % 1000000000;
	}
	cout << res;
	return 0;
}