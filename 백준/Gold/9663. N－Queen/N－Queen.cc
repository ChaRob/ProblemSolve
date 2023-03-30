#include<iostream>
using namespace std;

int res = 0;

void putchess(int k, int n, bool *col, bool *left_diagonal, bool *right_diagonal) {
	if (k == n) {
		res++;
	}
	else {
		for (int i = 0; i < n; i++) {
			int tmp = i - k;
			if (tmp < 0) {
				tmp += 2*n;
			}
			if (!col[i] && !left_diagonal[tmp] && !right_diagonal[i + k]) {
				col[i] = true;
				left_diagonal[tmp] = true;
				right_diagonal[i + k] = true;
				putchess(k + 1, n, col, left_diagonal, right_diagonal);
				col[i] = false;
				left_diagonal[tmp] = false;
				right_diagonal[i + k] = false;
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
    bool col[14] = { false }, left_diagonal[27] = { false }, right_diagonal[27] = { false };
    putchess(0, n, col, left_diagonal, right_diagonal);
    cout << res;
	return 0;
}