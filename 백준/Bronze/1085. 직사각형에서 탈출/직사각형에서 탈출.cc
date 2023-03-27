#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x, y, w, h, minv;
	cin >> x >> y >> w >> h;
	minv = abs(x - 0);
	if (minv > abs(x - w)) {
		minv = abs(x - w);
	}
	if (minv > abs(y - 0)) {
		minv = abs(y - 0);
	}
	if (minv > abs(y - h)) {
		minv = abs(y - h);
	}
	cout << minv;
	return 0;
}