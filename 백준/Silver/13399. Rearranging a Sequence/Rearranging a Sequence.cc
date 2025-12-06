#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>> squence;
	for (int i = 0; i < n; i++)
	{
		squence.push_back({ i + 1, 0 });
	}
	for (int i = 1; i <= m; i++)
	{
		int data;
		cin >> data;
		squence[data - 1].second = i;
	}
	sort(squence.begin(), squence.end(), Compare);
	for (int i = 0; i < n; i++)
	{
		cout << squence[i].first << "\n";
	}
	return 0;
}