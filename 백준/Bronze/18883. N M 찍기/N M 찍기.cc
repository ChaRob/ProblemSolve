#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << m * i + j;
			if (j != m) cout << " ";
		}
		cout << "\n";
	}
	return 0;
}