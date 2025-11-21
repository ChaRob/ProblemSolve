#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	double w, h; int n;
	cin >> w >> h >> n;
	double load;
	if (n % 2 == 0)
		load = ((double)n - 2) / 4;
	else
		load = (double)(n - 1) * (n - 1) / (4 * n);
	cout << fixed << setprecision(6) << load * 2 * h;
	return 0;
}