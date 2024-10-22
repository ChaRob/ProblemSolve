#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int h, w;
	cin >> h >> w;
	if (h < w) cout << h * 50;
	else cout << w * 50;
	return 0;
}