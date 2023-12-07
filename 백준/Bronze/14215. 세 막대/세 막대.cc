#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b + c) {
		cout << (b + c) * 2 - 1;
	}
	else if (b >= a + c) {
		cout << (a + c) * 2 - 1;
	}
	else if (c >= a + b) {
		cout << (a + b) * 2 - 1;
	}
	else {
		cout << a + b + c;
	}
	return 0;
}