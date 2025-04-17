#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int c, p;
		cin >> c >> p;
		cout << c << " " << p << "\n";
		if (c > 1)
		{
			int ans = p;
			for (int j = 2; j <= c; j++)
			{
				ans += p - 2;
			}
			cout << ans << "\n";
		}
		else
		{
			cout << p << "\n";
		}
	}
	return 0;
}