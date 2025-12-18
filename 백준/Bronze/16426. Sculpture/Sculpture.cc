#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int r, c;
	cin >> r >> c;
	int arr[100][100] = { 0 };
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
				cout << 0 << " ";
				continue;
			}

			if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j] &&
				arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1]) {
				cout << 1 << " ";
			}
			else cout << 0 << " ";
		}
		cout << "\n";
	}
	return 0;
}