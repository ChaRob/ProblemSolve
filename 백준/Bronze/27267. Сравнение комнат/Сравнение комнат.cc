#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int result = (a * b) - (c * d);
	if (result > 0) cout << "M";
	else if (result < 0) cout << "P";
	else cout << "E";
	return 0;
}