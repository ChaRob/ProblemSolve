#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	vector<pair<char, int>> list;
	char c;
	while (cin >> c)
	{
		bool found = false;
		for (int i = 0; i < list.size(); i++)
		{
			if (list[i].first == c)
			{
				list[i].second++;
				found = true;
				break;
			}
		}
		if (!found) list.push_back({ c,1 });
	}
	sort(list.begin(), list.end(), [](pair<char, int> a, pair<char, int> b) {
		if (a.second == b.second) return a.first < b.first;
		return a.second > b.second;
		});
	for (auto p : list)
	{
		for (int i = 0; i < p.second; i++)
			cout << p.first;
	}
	return 0;
}