#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> row, col;
	int target = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int charm;
			cin >> charm;
			if (i == a) row.push_back(charm);
			if (j == b) col.push_back(charm);
			if (i == a && j == b) target = charm;
		}
	}
	bool check = true;
	for (int i = 0; i < n; i++)
	{
		if (target < row[i] || target < col[i])
		{
			check = false;
			break;
		}
	}
	if (check) cout << "HAPPY";
	else cout << "ANGRY";
	return 0;
}