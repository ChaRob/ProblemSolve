#include<iostream>
using namespace std;
int main() {
	int basket[101];
	int n, m, i, j, tmp = 0;
	cin >> n >> m;
	for (int x = 0; x <= n; x++) {
		basket[x] = x;
	}
	for (int x = 1; x <= m; x++) {
		cin >> i >> j;
		tmp = basket[i];
		basket[i] = basket[j];
		basket[j] = tmp;
	}
	for (int x = 1; x <= n; x++) {
		cout << basket[x] << " ";
	}
	return 0;
}