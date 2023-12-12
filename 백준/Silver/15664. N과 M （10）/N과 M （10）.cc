#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<string>
using namespace std;

vector<int> vec;
unordered_set<string> check;

void solve(int& n, int& m, int cnt, int* nums, int select) {
	if (cnt == m) {
		string a;
		for (int i = 0; i < m; i++)
		{
			a.append(to_string(nums[i]) + " ");
		}
		unordered_set<string>::iterator iter = check.find(a);
		if (iter == check.end()) {
			cout << a << "\n";
			check.insert(a);
		}
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if ((select & (1 << i)) == 0) {
			if (cnt > 0 && nums[cnt - 1] > vec[i]) continue;

			select |= (1 << i);
			nums[cnt] = vec[i];
			solve(n, m, cnt + 1, nums, select);
			nums[cnt] = 0;
			select ^= (1 << i);
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	int nums[8] = {};
	solve(n, m, 0, nums, 0);
	return 0;
}