#include<iostream>
using namespace std;
int paper[2187][2187] = { 0 };

void cutpaper(int* arr, int sizen, int start_x, int start_y) {
	int standard = paper[start_x][start_y];
	bool check = false;
	for (int i = start_x; i < start_x + sizen; i++) {
		for (int j = start_y; j < start_y + sizen; j++) {
			if (standard != paper[i][j]) {
				i = start_x + sizen;
				check = true;
				break;
			}
		}
	}
	if (check) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cutpaper(arr, sizen / 3, start_x + i * sizen / 3, start_y + j * sizen / 3);
			}
		}
	}
	else {
		arr[standard + 1] = arr[standard + 1] + 1;
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, arr[3] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}
	cutpaper(arr, n, 0, 0);
	cout << arr[0] << "\n" << arr[1] << "\n" << arr[2];
	return 0;
}