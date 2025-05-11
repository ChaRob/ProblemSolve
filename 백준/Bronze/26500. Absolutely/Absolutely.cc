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
		double a, b;
		cin >> a >> b;
		double length = round(abs(a - b) * 10.0) / 10.0;
		cout << fixed << setprecision(1) << length << "\n";
	}
	return 0;
}