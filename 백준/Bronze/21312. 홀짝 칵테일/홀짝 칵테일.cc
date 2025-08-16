#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	bool isOdd = (a % 2 == 1) || (b % 2 == 1) || (c % 2 == 1);
	int maxValue = 0;
	if (isOdd) {
		if (a % 2 == 1) maxValue = a;
		if (b % 2 == 1 && b > maxValue) maxValue = b;
		if (c % 2 == 1 && c > maxValue) maxValue = c;
	}

	if (isOdd) {
		if (a * b > maxValue && (a * b) % 2 == 1)
		{
			maxValue = a * b;
		}
		if (a * c > maxValue && (a * c) % 2 == 1)
		{
			maxValue = a * c;
		}
		if (b * c > maxValue && (b * c) % 2 == 1)
		{
			maxValue = b * c;
		}
		if (a * b * c > maxValue && (a * b * c) % 2 == 1)
		{
			maxValue = a * b * c;
		}
	}
	else {
		if (a * b > maxValue)
		{
			maxValue = a * b;
		}
		if (a * c > maxValue)
		{
			maxValue = a * c;
		}
		if (b * c > maxValue)
		{
			maxValue = b * c;
		}
		if (a * b * c > maxValue)
		{
			maxValue = a * b * c;
		}
	}

	cout << maxValue;
	return 0;
}