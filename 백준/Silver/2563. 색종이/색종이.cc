#include<iostream>
using namespace std;
int board[100][100] = { 0 };
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, x, y, cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> y >> x;
		for (int j = x; j < x+10; j++) {
			for (int k = y; k < y+10; k++) {
				board[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (board[i][j]) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}