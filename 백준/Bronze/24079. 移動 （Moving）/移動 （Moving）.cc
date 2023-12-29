#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y <= z) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}