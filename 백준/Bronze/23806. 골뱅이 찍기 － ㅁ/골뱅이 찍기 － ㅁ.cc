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
		for (int j = 0; j < n * 5; j++)
		{
			if (n <= i && i < n * 4)
			{
				if (j < n || j >= n * 4)
				{
					cout << "@";
				}
				else
					cout << " ";
			}
			else
			{
				cout << "@";
			}
		}
		cout << "\n";
	}
	return 0;
}