#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n+2; i++)
	{
		for (int j = 0; j < n+2; j++)
		{
			if (i == 0 || i == n + 1) cout << '@';
			else if (j == 0 || j == n + 1) cout << '@';
			else cout << ' ';
		}
		cout << "\n";
	}
	return 0;
}