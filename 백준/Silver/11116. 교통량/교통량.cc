#include <iostream>
#include <vector>
using namespace std;

bool FindRight(const int& target, const vector<int>& _right)
{
	bool found = false;
	for (int i = 0; i < _right.size(); i++)
	{
		if (!found && _right[i] == target + 1000)
		{
			found = true;
		}
		else if (found && _right[i] == target + 1500)
		{
			return true;
		}
	}
	return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int m;
		cin >> m;
		vector<int> left, right;
		for (int i = 0; i < m; i++)
		{
			int s;
			cin >> s;
			left.push_back(s);
		}
		for (int i = 0; i < m; i++)
		{
			int s;
			cin >> s;
			right.push_back(s);
		}
		int ans = 0, target, idx = 0;
		while (idx < left.size() - 1)
		{
			target = left[idx];
			bool found = false;
			for (int i = idx + 1; i < left.size(); i++)
			{
				if (!found && left[i] == target + 500)
				{
					found = FindRight(target, right);
					if (found) break;
				}
			}
			if (found) ans++;
			idx++;
		}
		cout << ans << "\n";
	}
	return 0;
}