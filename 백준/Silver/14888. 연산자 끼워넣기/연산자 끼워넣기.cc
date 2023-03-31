#include<iostream>
using namespace std;

int minv = 1000000000, maxv = -1000000000;

void choice(int k, int n, int *cal, int *A, int res) {
	if (k == n) {
		if (res > maxv) {
			maxv = res;
		}
		if (res < minv) {
			minv = res;
		}
	}
	else {
		int tmp;
		for (int i = 0; i < 4; i++) {
			if (cal[i]) {
				switch (i)
				{
				case 0:
					tmp = res + A[k];
					break;
				case 1:
					tmp = res - A[k];
					break;
				case 2:
					tmp = res * A[k];
					break;
				case 3:
					tmp = res / A[k];
					break;
				default:
					break;
				}
				cal[i]--;
				choice(k + 1, n, cal, A, tmp);
				cal[i]++;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int A[11] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int cal[4] = { 0 };
	for (int i = 0; i < 4; i++) {
		cin >> cal[i];
	}
	choice(1, n, cal, A, A[0]);
	cout << maxv << "\n" << minv;
	return 0;
}