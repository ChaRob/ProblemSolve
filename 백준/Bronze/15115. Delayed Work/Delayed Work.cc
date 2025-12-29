#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double k, p, x, minValue = 1e10;
	cin >> k >> p >> x;
	for (int i = 1; i <= 10000; i++)
	{
		double value = i * x + k * p / i;
		minValue = (minValue < value) ? minValue : value;
	}
	cout << fixed << setprecision(3) << minValue;
	return 0;
}