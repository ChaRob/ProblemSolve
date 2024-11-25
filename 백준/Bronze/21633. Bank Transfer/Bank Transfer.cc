#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float commission, k;
	cin >> k;
	commission = 25 + k / 100;
	if (commission < 100.00) commission = 100.00f;
	else if (commission > 2000.00) commission = 2000.00f;
	cout << fixed << setprecision(2) << commission;
	return 0;
}