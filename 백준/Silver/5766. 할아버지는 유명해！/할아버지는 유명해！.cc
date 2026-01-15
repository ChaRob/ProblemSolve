#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	while (true)
	{
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		int ranking[10001] = {};
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int player;
				cin >> player;
				ranking[player]++;
			}
		}
		int first = 0, second = 0;
		for (int i = 1; i < 10001; i++)
		{
			if (first < ranking[i])
			{
				second = first;
				first = ranking[i];
			}
			else if (second < ranking[i] && second < first)
			{
				second = ranking[i];
			}
		}
		for (int i = 1; i < 10001; i++)
		{
			if (ranking[i] == second)
				cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}