#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, n, tmp;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
		}
	}
	if (m < 8) cout << "unsatisfactory";
	else cout << "satisfactory";
	return 0;
}