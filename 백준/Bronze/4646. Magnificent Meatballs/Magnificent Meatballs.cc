#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	int guests[30] = {};
	while (cin >> n)
	{
		if (n == 0) break;
		int sam = 0, ella = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> guests[i];
			ella += guests[i];
		}
		bool check = false;
		for (int i = 0; i < n - 1; i++)
		{
			sam += guests[i];
			ella -= guests[i];
			if (sam == ella)
			{
				cout << "Sam stops at position " << i + 1 << " and Ella stops at position " << i + 2 << ".\n";
				check = true;
				break;
			}
		}
		if (!check)
		{
			cout << "No equal partitioning.\n";
		}
	}
	return 0;
}