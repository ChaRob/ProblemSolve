#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int m, n;
	vector<int> key(10);
	while (true)
	{
		cin >> m >> n;
		if (m == 0 && n == 0) break;
		for (int i = 0; i < m; i++)
		{
			cin >> key[i];
		}
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			bool isValid = true;
			for (int j = 0; j < m; j++)
			{
				int frame;
				cin >> frame;
				if (frame > key[j]) isValid = false;
			}
			if (isValid) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}