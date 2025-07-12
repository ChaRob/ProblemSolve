#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	double sum = 1.0, x = 1.0;
	for (int i = 1; i <= n; i++) {
		x *= i;
		sum += 1.0 / x;
	}
	cout.precision(12);
	cout << fixed << sum << "\n";
	return 0;
}