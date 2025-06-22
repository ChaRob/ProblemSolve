#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int w, h, d;
	cin >> w >> h >> d;
	int x = w - 2 * d, y = h - 2 * d;
	if (x < 0 || y < 0) {
		cout << "0";
	}
	else {
		cout << x * y;
	}
	return 0;
}