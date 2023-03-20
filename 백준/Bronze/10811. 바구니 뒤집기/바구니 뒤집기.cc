#include<iostream>
using namespace std;
int main() {
	int basket[101];
	int n, m;
	int i, j, tmp;
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	for (int x = 1; x <= n; x++) {
		basket[x] = x;
	}
	for (int x = 1; x <= m; x++) {
		cin >> i >> j;
		for (int y = 0; y < (j-i)/2+1; y++) {
			tmp = basket[i + y];
			basket[i + y] = basket[j - y];
			basket[j - y] = tmp;
		}
	}
	for (int x = 1; x <= n; x++) {
		cout << basket[x] << " ";
	}
	return 0;
}