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
		int G, C, E, needCandy, ans;
		cin >> G >> C >> E;
		if (C >= E) needCandy = 0;
		else needCandy = E - C;
		switch (G)
		{
		case 1:
			ans = needCandy * 1;
			break;
		case 2:
			ans = needCandy * 3;
			break;
		case 3:
			ans = needCandy * 5;
			break;
		}
		cout << ans << "\n";
	}
	return 0;
}