#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float a;
	cin >> a;
	cout << fixed << setprecision(4) << 100 / a << "\n" << 100 / (100 - a);
	return 0;
}