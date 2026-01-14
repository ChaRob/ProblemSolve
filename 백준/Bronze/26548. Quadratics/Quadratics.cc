#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double a, b, c;
		cin >> a >> b >> c;
		double xp = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		double xn = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << fixed << setprecision(3) << xp << ", " << xn << "\n";
	}
	return 0;
}