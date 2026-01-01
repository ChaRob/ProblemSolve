#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int x, y, cnt = 0;
		cin >> x >> y;
		if (x >= 0 && y == 0)
			cnt = 0;
		else if (x >= 0)
			cnt = 1;
		else
		{
			if (y == 0)
				cnt = 1;
			else if (y < 0 && x >= y)
				cnt = 1;
			else
				cnt = 2;
		}

		cout << cnt << "\n";
	}
	return 0;
}