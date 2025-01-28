#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, inCar, outCar, max;
	cin >> n >> m;
	max = m;
	for (int i = 0; i < n; i++)
	{
		cin >> inCar >> outCar;
		m += inCar - outCar;
		if (m < 0) {
			max = 0;
			break;
		}
		max = (max > m) ? max : m;
	}
	cout << max;
	return 0;
}