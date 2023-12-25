#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B;
	cin >> A >> B;
	if (B + 1 < A) {
		cout << B * 2 + 1;
	}
	else {
		cout << A * 2 - 1;
	}
	return 0;
}