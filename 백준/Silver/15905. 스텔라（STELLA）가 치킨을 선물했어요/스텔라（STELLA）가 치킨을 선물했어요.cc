#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<int, int>> student(n);
	for (int i = 0; i < n; i++)
	{
		int problem, panalty;
		cin >> problem >> panalty;
		student[i] = make_pair(problem, panalty);
	}
	sort(student.begin(), student.end(), Compare);
	int target = student[4].first;
	int cnt = 0;
	for (int i = 5; i < n; i++)
	{
		if (student[i].first == target)
			cnt++;
	}
	cout << cnt;
	return 0;
}