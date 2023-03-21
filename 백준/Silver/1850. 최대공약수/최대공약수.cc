#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	unsigned long long a, b, tmp;
	cin >> a >> b;
	while (b > 0) {
		tmp = a;
		a = b;
		b = tmp % b;
	}
	for (int i = 1; i <= a; i++) {
		cout << 1;
	}
	return 0;
}