#include <iostream>
#include <string>
using namespace std;

int dp[1001][1001];
const int modVal = 10007;


int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	int size = input.size();
	for (int len = 1; len <= size; len++)
	{
		for (int l = 0; l + len - 1 < size; l++)
		{
			int r = l + len - 1;
			if (l == r) dp[l][r] = 1;
			else if (input[l] != input[r])
			{
				dp[l][r] = (dp[l + 1][r] + dp[l][r - 1] - dp[l + 1][r - 1]) % modVal;
				if (dp[l][r] < 0) dp[l][r] += modVal;
			}
			else
			{
				dp[l][r] = (dp[l + 1][r] + dp[l][r - 1] + 1) % modVal;
			}
		}
	}
	cout << dp[0][size-1];
	return 0;
}