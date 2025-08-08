#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, one = 0, two = 0;
	cin >> a >> b >> c;
	one = a + b * 2 + c * 3;
	cin >> a >> b >> c;
	two = a + b * 2 + c * 3;
	if (one == two) cout << 0;
	else if (one > two) cout << 1;
	else cout << 2;
	return 0;
}