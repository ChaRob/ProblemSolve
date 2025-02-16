#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float a, b, c;
	int idx = 1;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		cout << "Triangle #" << idx << "\n";
		if (c == -1) {
			cout << "c = " << fixed << setprecision(3) << sqrt(a * a + b * b) << "\n\n";
		}
		else if (b == -1) {
			if (c <= a) cout << "Impossible.\n\n";
			else {
				b = sqrt(c * c - a * a);
				if (a + b <= c)
					cout << "Impossible.\n\n";
				else
					cout << "b = " << fixed << setprecision(3) << b << "\n\n";
			}
		}
		else if (a == -1) {
			if (c <= b) cout << "Impossible.\n\n";
			else {
				a = sqrt(c * c - b * b);
				if (a + b <= c)
					cout << "Impossible.\n\n";
				else
					cout << "a = " << fixed << setprecision(3) << a << "\n\n";
			}
		}
		idx++;
	}
	return 0;
}