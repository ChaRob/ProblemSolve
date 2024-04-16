#include <iostream>
using namespace std;

int result = 0;

int cal(const int *arr, int& n) {
	int res = 0;
	for (int i = 0; i < n - 1; i++)
	{
		res += abs(arr[i] - arr[i + 1]);
	}
	return res;
}

void backtrack(int *arr, int& n, int cnt) {
	if (n - 1 == cnt) {
		int ans = cal(arr, n);
		if (ans > result) result = ans;
		return;
	}
	for (int i = cnt; i < n; i++)
	{
		int tmp = arr[cnt];
		arr[cnt] = arr[i];
		arr[i] = tmp;
		backtrack(arr, n, cnt + 1);
		tmp = arr[cnt];
		arr[cnt] = arr[i];
		arr[i] = tmp;
	}
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int* nums = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	result = cal(nums, n);
	backtrack(nums, n, 0);
	cout << result;

	delete[] nums;
	return 0;
}