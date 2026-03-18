#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, c, p;
	cin >> n >> c >> p;
	if (n <= c * p)
		cout << "yes";
	else
		cout << "no";
	return 0;
}