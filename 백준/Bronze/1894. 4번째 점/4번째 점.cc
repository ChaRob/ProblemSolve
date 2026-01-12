#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double x1, y1, x2, y2, x3, y3, x4, y4;
	while (cin >> x1 >> y1 >> x2 >> y2
			   >> x3 >> y3 >> x4 >> y4)
	{
		double ansX = 0, ansY = 0;
		if (x1 == x3 && y1 == y3)
		{
			ansX = x2 + x4 - x1;
			ansY = y2 + y4 - y1;
		}
		else if (x1 == x4 && y1 == y4)
		{
			ansX = x2 + x3 - x1;
			ansY = y2 + y3 - y1;
		}
		else if (x2 == x3 && y2 == y3)
		{
			ansX = x1 + x4 - x2;
			ansY = y1 + y4 - y2;
		}
		else
		{
			ansX = x1 + x3 - x2;
			ansY = y1 + y3 - y2;
		}
		cout << fixed << setprecision(3) << ansX << " " << ansY << "\n";
	}
	return 0;
}