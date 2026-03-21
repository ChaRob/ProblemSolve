#include <iostream>
#include <map>
#include <set>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	map<char, set<char>> includes;
	for (int i = 0; i < n; i++)
	{
		char x;
		int m;
		cin >> x >> m;
		set<char> include;
		for (int j = 0; j < m; j++)
		{
			char y;
			cin >> y;
			include.insert(y);
		}
		includes[x] = include;
	}
	string s;
	cin >> s;
	bool check = true;
	for (int i = 0; i < s.size() - 1; i++)
	{
		set<char> target = includes[s[i]];
		auto it = target.find(s[i + 1]);
		if (it == target.end())
		{
			check = false;
			break;
		}
	}
	if (check)
		cout << "yes";
	else
		cout << "no";
	return 0;
}