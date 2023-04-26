#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int T, n, m, a, b;
	cin >> T;
	for (size_t t = 0; t < T; t++)
	{
		cin >> n >> m;
		for (size_t i = 0; i < m; i++)
		{
			cin >> a >> b;
		}
		cout << n - 1 << "\n";
	}
	return 0;
}