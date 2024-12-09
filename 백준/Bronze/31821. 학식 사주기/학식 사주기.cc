#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, c, res = 0;
	cin >> n;
	int price[10] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> price[i];
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> c;
		res += price[c-1];
	}
	cout << res;
	return 0;
}