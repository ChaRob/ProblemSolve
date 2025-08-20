#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, d, now = 0;
	cin >> a >> b >> c >> d;
	now = ((a + b - 1) % 4 + (c + d - 1) % 4) % 4 + 1;
	cout << now;
	return 0;
}