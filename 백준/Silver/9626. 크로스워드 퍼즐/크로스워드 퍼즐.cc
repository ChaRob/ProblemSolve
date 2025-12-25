#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int m, n;
	cin >> m >> n;
	int u, l, r, d;
	cin >> u >> l >> r >> d;
	vector<string> crossword(m);
	for (int i = 0; i < m; i++)
	{
		cin >> crossword[i];
	}
	for (int i = 0; i < m + (u + d); i++)
	{
		for (int j = 0; j < n + (l + r); j++)
		{
			if (i < u || i >= m + u || j < l || j >= n + l)
			{
				int coord = i + j;
				char c = ((i + j) % 2 == 0) ? '#' : '.';
				cout << c;
				continue;
			}
			cout << crossword[i - u][j - l];
		}
		cout << '\n';
	}
	return 0;
}