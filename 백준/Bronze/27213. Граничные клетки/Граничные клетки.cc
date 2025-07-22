#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, n;
	cin >> m >> n;
	if (m == 1 && n == 1)
		cout << 1;
	else if (m == 1 || n == 1)
		cout << m * n;
	else
		cout << (m + n - 2) * 2;
	return 0;
}