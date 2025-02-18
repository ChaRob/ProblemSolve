#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float c4, a3, a4;
	cin >> c4 >> a3 >> a4;
	c4 = c4 * 0.229 * 0.324 * 2;
	a3 = a3 * 0.297 * 0.420 * 2;
	a4 = a4 * 0.210 * 0.297;
	cout << c4 + a3 + a4;
	return 0;
}