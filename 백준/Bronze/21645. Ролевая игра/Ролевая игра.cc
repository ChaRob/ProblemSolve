#include <iostream>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	int maxA = 0, maxB = 0;
	for (int i = 1; i <= m; i++)
	{
		int b = i / k;
		int a = i - b * k;
		maxA = (maxA > a * n) ? maxA : a * n;
		maxB = (maxB > b * n) ? maxB : b * n;
	}
	cout << maxA + maxB;
	return 0;
}