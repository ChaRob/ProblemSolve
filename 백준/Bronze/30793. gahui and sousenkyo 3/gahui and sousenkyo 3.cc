#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double p, r, res;
	cin >> p >> r;
	res = p / r;
	if (res < 0.2) cout << "weak";
	else if (res < 0.4) cout << "normal";
	else if (res < 0.6) cout << "strong";
	else cout << "very strong";
	return 0;
}