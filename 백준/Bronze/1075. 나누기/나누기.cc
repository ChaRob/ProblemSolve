#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, f;
	cin >> n >> f;
	n = (n / 100) * 100;
	while (n % f != 0) {
		n++;
	}
	int result = n % 100;
	if (result < 10) {
		cout << "0" << result;
	}
	else {
		cout << result;
	}

	return 0;
}