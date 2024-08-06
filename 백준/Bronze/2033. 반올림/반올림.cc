#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, ten = 10;
	cin >> n;
	while (n > ten) {
		n = round(n / (double)ten) * ten;
		ten *= 10;
	}
	cout << n;
	return 0;
}