#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long A, B;
	cin >> A >> B;
	long long result = (B + 1) * (2 + B * (A - 2)) / 2;
	cout << result;
	return 0;
}