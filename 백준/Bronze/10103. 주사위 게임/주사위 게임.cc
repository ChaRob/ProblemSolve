#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int a = 100, b = 100;
	for (int i = 0; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		if (l < r) {
			a -= r;
		}
		else if (l > r) {
			b -= l;
		}
	}
	cout << a << "\n" << b;
	return 0;
}