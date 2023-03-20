#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, a, b, min = 1000;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		if (a < b) {
			if (b < min) {
				min = b;
			}
		}
	}
	if (min == 1000) {
		min = -1;
	}
	cout << min;
	return 0;
}