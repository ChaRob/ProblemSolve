#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x1, y1, r1, x2, y2, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	if (dist < r1 + r2) cout << "YES";
	else cout << "NO";
	return 0;
}