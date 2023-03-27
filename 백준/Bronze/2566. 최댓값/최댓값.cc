#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x, y, maxv = -1, tmp;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> tmp;
			if (tmp > maxv) {
				x = i;
				y = j;
				maxv = tmp;
			}
		}
	}
	cout << maxv << "\n" << x << " " << y;
	return 0;
}