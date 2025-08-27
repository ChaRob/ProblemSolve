#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, x;
	cin >> n >> m;
	x = 14 + m - n;
	if (x == 0)
		cout << n - 7;
	else
		if (m + 7 > x)
			cout << m + 7 - x;
		else
			cout << m + 7;
	return 0;
}