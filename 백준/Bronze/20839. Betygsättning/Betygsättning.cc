#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float a, c, e, x, y, z;
	cin >> a >> c >> e >> x >> y >> z;
	char res = 'F';
	if (z == e) {
		if (y == c) {
			if (x == a) res = 'A';
			else if (x >= a / 2) res = 'B';
			else res = 'C';
		}
		else if (y >= c / 2) res = 'D';
		else res = 'E';
	}
	cout << res;
	return 0;
}