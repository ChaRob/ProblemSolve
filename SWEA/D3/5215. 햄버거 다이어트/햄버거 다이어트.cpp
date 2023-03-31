#include<iostream>
using namespace std;

int res;
pair<int, int> ingredient[20];

void choice(int score, int kcal, int sumk, int n, int k) {
	if (kcal < sumk) {
		return;
	}
	else {
		if (score > res) {
			res = score;
		}
		for (int i = k; i < n; i++) {
			choice(score + ingredient[i].first, kcal, sumk + ingredient[i].second, n, i + 1);
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, n, L, t, k;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> n >> L;
		for (int i = 0; i < n; i++) {
			cin >> t >> k;
			ingredient[i] = make_pair(t, k);
		}
		res = 0;
		choice(0, L, 0, n, 0);
		cout << "#" << test << " " << res << "\n";
	}
	return 0;
}