#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long p1, q1, p2, q2;
	cin >> p1 >> q1 >> p2 >> q2;
	long long up = p1 * p2;
	long long down = q1 * q2 * 2;
	if (up % down == 0) {
		cout << 1;
	}
	else {
		cout << 0;
	}

	return 0;
}