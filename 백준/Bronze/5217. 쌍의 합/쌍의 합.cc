#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, t;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool overOne = false;
		cin >> t;
		cout << "Pairs for " << t << ": ";
		for (int x = 1; x < t; x++)
		{
			for (int y = 1; y < t; y++)
			{
				if (x < y && x + y == t) {
					if (overOne) cout << ", ";
					cout << x << " " << y;
					overOne = true;
				}
			}
		}
		cout << "\n";
	}
	return 0;
}