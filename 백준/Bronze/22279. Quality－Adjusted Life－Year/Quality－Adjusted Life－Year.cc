#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	double qaly = 0;
	for (int i = 0; i < n; i++)
	{
		double q, y;
		cin >> q >> y;
		qaly += q * y;
	}
	cout << fixed << setprecision(3) << qaly;
	return 0;
}