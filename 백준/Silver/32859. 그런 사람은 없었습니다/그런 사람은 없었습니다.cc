#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

struct Info
{
	bool deposit;
	bool form;
	int time;
};

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n, m, S;
	cin >> n >> m >> S;
	vector<Info> member(n + 1);
	vector<int> forget;
	set<int> result;
	int form_count = 0;
	for (int i = 1; i <= m; i++)
	{
		int x, t;
		cin >> x >> t;
		if (t == 0)
		{
			member[x].form = true;
			member[x].time = form_count++;
			auto it = find(forget.begin(), forget.end(), x);
			if (it != forget.end())
				forget.erase(it);
		}
		else
		{
			member[x].deposit = true;
			member[x].time = form_count;
			if (member[x].form == false)
				forget.push_back(x);
		}

		for (int j = 0; j < forget.size(); j++)
		{
			if (member[forget[j]].time <= form_count - S)
			{
				result.insert(forget[j]);
			}
		}
	}
	if (result.empty())
		cout << "-1";
	else
		for (const auto& r : result) cout << r << '\n';
	return 0;
}