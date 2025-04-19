#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x = 0, y = 0;
	char c;
	while (cin >> c) {
		if (c == 'A') x++;
		else if (c == 'B') y++;
	}
	cout << x << " : " << y;
	return 0;
}