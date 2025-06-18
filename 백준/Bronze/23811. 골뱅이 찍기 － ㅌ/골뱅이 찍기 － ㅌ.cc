#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < 5 * n; i++)
	{
		for (int j = 0; j < 5 * n; j++)
		{
			if (j >= n && ((i >= n && i < 2 * n) || (i >= 3 * n && i < 4 * n))) break;
			cout << '@';
		}
		cout << "\n";
	}
	return 0;
}