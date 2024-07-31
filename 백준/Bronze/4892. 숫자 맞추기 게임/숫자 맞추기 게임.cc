#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n0, n1, n2, n3, n4, i = 1;
	while (cin >> n0) {
		if (n0 == 0) break;
		cout << i++ << ". ";
		n1 = n0 * 3;
		if (n1 % 2) {
			n2 = (n1 + 1) / 2;
			cout << "odd ";
		}
		else {
			n2 = n1 / 2;
			cout << "even ";
		}
		n3 = n2 * 3;
		n4 = n3 / 9;
		cout << n4 << "\n";
	}
	return 0;
}