#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == 1 || a == 3) &&
		(b == 6 || b == 8) &&
		(c == 2 || c == 5))
		cout << "JAH";
	else
		cout << "EI";
	return 0;
}