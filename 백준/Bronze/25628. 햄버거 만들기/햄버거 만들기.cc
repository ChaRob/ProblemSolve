#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b;
	cin >> a >> b;
	if (a > b * 2) {
		cout << b;
	}
	else {
		cout << a / 2;
	}
	return 0;
}