#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int highest;
		cin >> highest;
		int* x = new int[highest + 1];
		for (int i = highest; i >= 0; i--)
		{
			cin >> x[i];
		}
		cout << "Case " << t << ": " << highest - 1;
		for (int i = highest; i >= 1; i--)
		{
			cout << " " << x[i] * i;
		}
		cout << "\n";
	}
	return 0;
}