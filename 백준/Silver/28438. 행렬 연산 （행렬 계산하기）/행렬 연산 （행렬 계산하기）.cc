#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, q;
	cin >> n >> m >> q;
	vector<int> row, col;
	row.resize(n, 0);
	col.resize(m, 0);
	for (int i = 0; i < q; i++)
	{
		int cal;
		cin >> cal;
		if (cal == 1)
		{
			int r, v;
			cin >> r >> v;
			row[r - 1] += v;
		}
		else if (cal == 2)
		{
			int c, v;
			cin >> c >> v;
			col[c - 1] += v;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << row[i] + col[j] << " ";
		}
		cout << "\n";
	}
	return 0;
}