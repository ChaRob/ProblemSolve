#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n * 5; i++)
	{
		for (int j = 0; j < n*5; j++)
		{
			if (i < n || i >= n * 4)
			{
				cout << '@';
				continue;
			}
			else if (j >= n) break;
			cout << '@';
		}
		cout << '\n';
	}
	return 0;
}