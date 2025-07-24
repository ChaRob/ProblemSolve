#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int line = 0; line < n*5; line++)
	{
		for (int col = 0; col < n*5; col++)
		{
			if (line < n || line >= n * 4)
			{
				if (col < n || col >= 4 * n)
					cout << "@";
				else
					cout << " ";
			}
			else if (line < n * 2 || line >= n * 3)
			{
				if (col >= n * 4)
					break;
				else if (col < n || col >= n * 3)
					cout << "@";
				else
					cout << " ";
			}
			else
			{
				if (col < n * 3)
					cout << "@";
				else
					break;
			}
		}
		cout << "\n";
	}
	return 0;
}