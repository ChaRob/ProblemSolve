#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int l, r, max;
	cin >> l >> r;
	if (l == 0 && r == 0) {
		cout << "Not a moose";
	}
	else if (l == r) {
		cout << "Even " << l * 2;
	}
	else {
		max = (l > r) ? l : r;
		cout << "Odd " << max*2;
	}
	return 0;
}