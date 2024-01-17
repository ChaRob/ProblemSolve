#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, b, c, cnt = 0;
	cin >> a >> b >> c;
	if (b - a > 1) {
		cnt = (b - a - 1 > cnt) ? b - a - 1 : cnt;
	}
	if (c - b > 1) {
		cnt = (c - b - 1 > cnt) ? c - b - 1 : cnt;
	}
	cout << cnt;
	return 0;
}