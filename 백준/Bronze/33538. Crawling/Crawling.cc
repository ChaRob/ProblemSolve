#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	double l, t;
	cin >> l >> n;
	cin >> t;
	bool canBeat = false;
	for (int i = 0; i < n; i++)
	{
		double f, b;
		cin >> f >> b;
		if (l / f + l / b < t) {
			canBeat = true;
		}
	}
	if (canBeat) {
		cout << "HOPE";
	}
	else {
		cout << "DOOMED";
	}
	return 0;
}