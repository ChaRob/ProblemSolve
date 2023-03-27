#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, a, b, c, minv;
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> a >> b >> c;
		minv = a;
		if (minv > b) {
			minv = b;
		}
		if (minv > c) {
			minv = c;
		}
		cout << minv << "\n";
	}
	return 0;
}