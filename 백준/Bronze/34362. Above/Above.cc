#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double n;
	cin >> n;
	cout << fixed << setprecision(4) << n - 0.3;
	return 0;
}