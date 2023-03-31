#include<iostream>
using namespace std;

int res;
int S[16][16] = { 0 };

void choice(bool *ingredient, int k, int n, int cnt) {
	if (cnt == (n / 2)) {
		int food1 = 0, food2 = 0, gap = 0;
		int food1_idx[8] = { 0 };
		int food2_idx[8] = { 0 };
		for (int i = 0; i < n; i++) {
			if (ingredient[i]) {
				food1_idx[food1++] = i;
			}
			else {
				food2_idx[food2++] = i;
			}
		}
		food1 = 0; food2 = 0;
		for (int i = 0; i < n / 2; i++)
		{
			for (int j = 0; j < n / 2; j++)
			{
				if (S[food1_idx[i]][food1_idx[j]]) {
					food1 += S[food1_idx[i]][food1_idx[j]];
				}
				if (S[food2_idx[i]][food2_idx[j]]) {
					food2 += S[food2_idx[i]][food2_idx[j]];
				}
			}
		}
		gap = abs(food1 - food2);
		if (res > gap) {
			res = gap;
		}
	}
	else {
		for (int i = k; i < n; i++)
		{
			if (!ingredient[i]) {
				ingredient[i] = true;
				choice(ingredient, i + 1, n, cnt + 1);
				ingredient[i] = false;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cin >> S[i][j];
			}
		}
		bool ingredient[16] = { false };
		res = 40000;
		choice(ingredient, 0, n, 0);
		cout << "#" << test << " " << res << "\n";
	}
	return 0;
}