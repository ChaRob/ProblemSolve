#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n*5; i++)
	{
		for (int j = 1; j <= n*5; j++)
		{
			if (j > n && i <= n*4) break;
			cout << '@';
		}
		cout << '\n';
	}
	return 0;
}