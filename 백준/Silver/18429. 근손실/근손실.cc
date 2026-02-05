#include <iostream>
#include <vector>
using namespace std;

int Dfs(const vector<int>& _exercise, vector<int>& _used, const int n, const int k, int nowWeight, int nowTry)
{
	int cnt = 0;
	if (nowTry == n)
		return 1;
	for (int i = 0; i < n; i++)
	{
		if (!_used[i] && nowWeight - k + _exercise[i] >= 500)
		{
			_used[i] = true;
			cnt += Dfs(_exercise, _used, n, k, nowWeight - k + _exercise[i], nowTry + 1);
			_used[i] = false;
		}
	}
	return cnt;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	vector<int> exercise(n), used(n);
	for (int i = 0; i < n; i++)
	{
		cin >> exercise[i];
		used[i] = false;
	}
	cout << Dfs(exercise, used, n, k, 500, 0);
	return 0;
}