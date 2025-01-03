#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		double d, f, p;
		cin >> d >> f >> p;
		double res = round(d * f * p*1000)/1000;
		cout << "$" << fixed << setprecision(2) << res << "\n";
	}
	return 0;
}