#include<iostream>
using namespace std;
int main() {
	int X, n;
	int a, b, sum = 0;
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> X >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	if (X != sum) {
		cout << "No";
	}
	else {
		cout << "Yes";
	}
	return 0;
}