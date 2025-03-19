#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, p, cnt = 0;
	cin >> n >> m >> p;
	for (int i = 0; i < n; i++)
	{
		int check = 0, bread;
		for (int j = 0; j < m; j++)
		{
			cin >> bread;
			if (bread == 0) check++;
		}
		if (check < p) cnt++;
	}
	cout << cnt;
	return 0;
}