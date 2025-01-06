#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, tmp;
	cin >> a >> b >> c;
	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	if (b > c) {
		tmp = b;
		b = c;
		c = tmp;
	}
	if (a + b == c) cout << 1;
	else if (a * b == c) cout << 2;
	else cout << 3;
	return 0;
}