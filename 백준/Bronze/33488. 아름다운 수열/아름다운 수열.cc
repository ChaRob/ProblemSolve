#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		cout << "YES\n";
		for (int i = 1; i <= n; i++)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}