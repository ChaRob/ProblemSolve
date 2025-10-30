#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, h, w;
	cin >> a >> b >> h >> w;
	int x = h / a + (h % a != 0);
	int y = w / b + (w % b != 0);
	cout << x * y;
	return 0;
}