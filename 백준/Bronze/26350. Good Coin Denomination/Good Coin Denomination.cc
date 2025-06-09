#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		cout << "Denominations: ";
		int lastD = 0;
		bool check = true;
		for (int i = 0; i < n; i++)
		{
			int d;
			cin >> d;
			cout << d << " ";
			if (d < lastD * 2)
			{
				check = false;
			}
			lastD = d;
		}
		cout << "\n";
		if (check)
		{
			cout << "Good coin denominations!\n\n";
		}
		else
		{
			cout << "Bad coin denominations!\n\n";
		}
	}
	return 0;
}