#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	unsigned long long n;
	cin >> n;
	if (n >= 3) {
		cout << n * (n - 1) * (n - 2) / 6 << "\n" << 3;
	}
	else {
		cout << 0 << "\n" << 3;
	}
	return 0;
}