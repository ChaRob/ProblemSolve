#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, max = 0, a, d, g;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> a >> d >> g;
		tmp = a * (d + g);
		if (a == d + g) tmp *= 2;
		max = (max > tmp) ? max : tmp;
	}
	cout << max;
	return 0;
}