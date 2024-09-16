#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	if (c % 2) {
		a ^= b;
	}
	cout << a;
	return 0;
}