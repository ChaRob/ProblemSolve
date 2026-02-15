#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t, n;
	while (true)
	{
		cin >> t >> n;
		if (t == 0 && n == 0)
			break;

		int sumPoint = 0, cnt;
		for (int i = 0; i < t; i++)
		{
			string input;
			int point;
			cin >> input >> point;
			sumPoint += point;
		}
		for (cnt = 0; cnt <= n; cnt++)
		{
			int winPlayPoint = 3 * (n - cnt);
			int drawPlayPoint = 2 * cnt;
			if (sumPoint == winPlayPoint + drawPlayPoint)
				break;
		}
		cout << cnt << "\n";
	}
	return 0;
}