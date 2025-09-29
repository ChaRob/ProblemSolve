#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

static bool Compare(const pair<string, int>& a, const pair<string, int>& b)
{
	if (a.second != b.second)
		return a.second > b.second; // Descending order by score
	return a.first < b.first; // Ascending order by name
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<string, int>> computers;
	for (int i = 0; i < n; i++)
	{
		string name;
		int r, s, d;
		cin >> name >> r >> s >> d;
		int score = r * 2 + s * 3 + d;
		computers.push_back({ name, score });
	}
	if (n > 1)
	{
		sort(computers.begin(), computers.end(), Compare);
	}
	if (n > 0)
		cout << computers[0].first << "\n";
	if (n > 1)
		cout << computers[1].first;
	return 0;
}