#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.1415926535;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long a;
	cin >> a;
	cout << fixed << setprecision(9) << 2 * sqrt(a * PI);
	return 0;
}