#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float sp, sw, np, nw, up, uw;
	cin >> sp >> sw >> np >> nw >> up >> uw;
	float s = (sw * 10) / ((sp * 10 >= 5000) ? sp * 10 - 500 : sp * 10);
	float n = (nw * 10) / ((np * 10 >= 5000) ? np * 10 - 500 : np * 10);
	float u = (uw * 10) / ((up * 10 >= 5000) ? up * 10 - 500 : up * 10);
	if (s > n && s > u)
		cout << "S";
	else if (n > s && n > u)
		cout << "N";
	else if (u > s && u > n)
		cout << "U";
	return 0;
}