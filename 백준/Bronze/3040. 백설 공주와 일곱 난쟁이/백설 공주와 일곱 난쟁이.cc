#include<iostream>
using namespace std;

int idx[7];

bool solve(int* value, int sum, int nowIdx, int cnt) {
	if (nowIdx == 7) {
		if (sum == 100) {
			return true;
		}
		return false;
	}
	if (sum > 100) return false;
	for (int i = cnt; i < 9; i++)
	{
		if (solve(value, sum + value[i], nowIdx + 1, i + 1)) {
			idx[nowIdx] = value[i];
			return true;
		}
	}
	return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int value[9] = {};
	for (int i = 0; i < 9; i++)
	{
		cin >> value[i];
	}
	solve(value, 0, 0, 0);
	for (int i = 0; i < 7; i++)
	{
		cout << idx[i] << '\n';
	}

	return 0;
}