#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	for (int i = 0; i < n; i++)
	{
		if (x & 1) x = (2 * x) ^ 6;
		else x = (int)round((double)x / 2) ^ 6;
	}
	cout << x;
	return 0;
}