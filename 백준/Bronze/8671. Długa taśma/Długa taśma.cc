#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	double minVal = 1e10;
	for (int i = 0; i < n; i++)
	{
		double input;
		cin >> input;
		minVal = (input < minVal) ? input : minVal;
	}
	cout << fixed << setprecision(2) << minVal;
	return 0;
}