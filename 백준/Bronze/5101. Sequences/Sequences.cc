#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (true)
	{
		int a, n, x;
		cin >> a >> n >> x;
		if (a == 0 && n == 0 && x == 0)
			break;

		bool check = true;;
		int remainder = (x - a) % n;
		int term = (x - a) / n + 1;
		if (remainder != 0 || term < 1)
			check = false;

		if (check)
			cout << term << "\n";
		else
			cout << "X\n";
	}
	return 0;
}