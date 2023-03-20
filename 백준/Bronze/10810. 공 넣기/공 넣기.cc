#include<iostream>
using namespace std;
int main() {
	int basket[101] = { 0 };
	int n, m;
	int i, j, k;
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	for (int x = 1; x <= m; x++) {
		cin >> i >> j >> k;
		for (int y = i; y <= j; y++) {
			basket[y] = k;
		}
	}
	for (int x = 1; x <= n; x++) {
		cout << basket[x] << " ";
	}
	return 0;
}