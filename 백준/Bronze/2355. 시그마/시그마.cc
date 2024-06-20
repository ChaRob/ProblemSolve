#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll A, B;
	cin >> A >> B;
	if (A > B) {
		int tmp = A;
		A = B;
		B = tmp;
	}
	if (A == B) {
		cout << A;
	}
	else if (A < 0 and B == 0) {
		cout << -(A * (A - 1) / 2);
	}
	else if (A < 0 and B < 0) {
		cout << -(A * (A - 1) / 2) + B * (B + 1) / 2;
	}
	else if (A < 0 and B > 0) {
		cout << -(A * (A - 1) / 2) + B * (B + 1) / 2;
	}
	else if (A == 0 and B > 0) {
		cout << B * (B + 1) / 2;
	}
	else if (A > 0 and B > 0) {
		cout << B * (B + 1) / 2 - A * (A - 1) / 2;
	}
	return 0;
}