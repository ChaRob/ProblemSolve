#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	a += b;
	if (a % 12 == 0) {
		cout << 12;
	}
	else {
		cout << a % 12;
	}
	return 0;
}