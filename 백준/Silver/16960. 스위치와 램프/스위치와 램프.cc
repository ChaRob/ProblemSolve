#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	bool* lamps = new bool[m + 1];
	vector<vector<int>> switchs;
	for (int i = 0; i < n; i++)
	{
		int cnt;
		cin >> cnt;
		vector<int> newSwitch;
		switchs.push_back(newSwitch);
		for (int j = 0; j < cnt; j++)
		{
			int lamp;
			cin >> lamp;
			switchs[i].push_back(lamp);
		}
	}
	bool check = true;
	for (int none = 0; none < n; none++)
	{
		for (int i = 0; i <= m; i++)
		{
			lamps[i] = false;
		}
		for (int i = 0; i < n; i++)
		{
			if (none == i) continue;
			for (int j = 0; j < switchs[i].size(); j++)
			{
				lamps[switchs[i][j]] = true;
			}
		}
		for (int i = 1; i <= m; i++)
		{
			check = true;
			if (!lamps[i])
			{
				check = false;
				break;
			}
		}
		if (check)
		{
			cout << 1;
			break;
		}
	}
	if (!check) cout << 0;
	delete[] lamps;
	return 0;
}