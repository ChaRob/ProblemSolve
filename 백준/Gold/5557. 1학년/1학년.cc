#include<iostream>
#include<memory.h>
using namespace std;

long long dp[101][21];

long long cal(int idx, int res, int *arr) {
	long long tmp = 0;
	if (idx == 0 && res == arr[0]) {
		dp[idx][res] = 1;
		return dp[idx][res];
	}
	else if (idx == 0 && res != arr[0]) {
		dp[idx][res] = 0;
		return dp[idx][res];
	}

	if (dp[idx][res] != -1) {
		return dp[idx][res];
	}

	if (res - arr[idx] >= 0) {
		tmp += cal(idx - 1, res - arr[idx], arr);
	}
	if (res + arr[idx] <= 20) {
		tmp += cal(idx - 1, res + arr[idx], arr);
	}
	dp[idx][res] = tmp;
	return tmp;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, result, top, plus, minus;
	cin >> n;
	int *arr = new int[n-1];
	for (size_t i = 0; i < n-1; i++)
	{
		cin >> arr[i];
	}
	cin >> result;
	memset(dp, -1, sizeof(dp));
	cout << cal(n - 2, result, arr);
	delete[] arr;
	return 0;
}