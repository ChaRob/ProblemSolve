#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, input, h = 0, b = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		h = (h > input) ? h : input;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		b = (b > input) ? b : input;
	}
	cout << h + b;
	return 0;
}