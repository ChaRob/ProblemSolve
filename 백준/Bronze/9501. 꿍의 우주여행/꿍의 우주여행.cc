#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int cnt = 0;
		float d, v, f, c, res;
		cin >> n >> d;
		for (int i = 0; i < n; i++)
		{
			cin >> v >> f >> c;
			res = v * f / c;
			if (res >= (float)d) cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}