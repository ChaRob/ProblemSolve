#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double x[3], y[3], r;
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}
	cin >> r;
	double a = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));
	double b = sqrt(pow(x[1] - x[2], 2) + pow(y[1] - y[2], 2));
	double c = sqrt(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2));
	double area = sqrt(4 * a * a * b * b - pow(a * a + b * b - c * c, 2)) / 4;
	double cal_r = area / (a + b + c) * 2;
	cout << fixed << setprecision(3) << (cal_r - r) / r * 100;
	return 0;
}