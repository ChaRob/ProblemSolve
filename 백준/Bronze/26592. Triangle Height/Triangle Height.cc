#include <iostream>
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
		float area, base, height;
		cin >> area >> base;
		height = 2 * area / base;
		cout << "The height of the triangle is " << fixed << setprecision(2) << height << " units\n";
	}
	return 0;
}