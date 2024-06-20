#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int L, n, predict = 0, pre_i;
	cin >> L >> n;
	int* roll = new int[L + 1] {};
	int* audi = new int[n + 1] {};
	for (int i = 1; i <= n; i++)
	{
		int p, k;
		cin >> p >> k;
		if (predict < k - p + 1) {
			predict = k - p + 1;
			pre_i = i;
		}
		for (int idx = p; idx <= k; idx++)
		{
			if (roll[idx] == 0) roll[idx] = i;
		}
	}
	for (int i = 1; i <= L; i++)
	{
		audi[roll[i]]++;
	}
	int max = 0, max_i;
	for (int i = 1; i <= n; i++)
	{
		if (max < audi[i]) {
			max = audi[i];
			max_i = i;
		}
	}
	cout << pre_i << "\n" << max_i;
	delete[] audi, roll;
	return 0;
}