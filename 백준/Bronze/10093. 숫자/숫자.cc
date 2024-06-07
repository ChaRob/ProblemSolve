#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long a, b, tmp;
	cin >> a >> b;
	if (a > b) {
		cout << a - b - 1 << "\n";
		tmp = b;
		b = a;
		a = tmp;
	}
	else if (a == b) {
		cout << 0 << "\n";
	}
	else {
		cout << b - a - 1 << "\n";
	}
	while (++a < b) {
		cout << a << " ";
	}
	return 0;
}