#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int n = 10 * i + j;
			if (n == 0)
				continue;

			if ((i + 10 * j) % 4)
				continue;

			if ((i + j) % 6)
				continue;

			if (i != 8 && j != 8)
			{
				cout << 10 * i + j;
				return 0;
			}
		}
	}
	return 0;
}