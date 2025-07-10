#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int N, A, D, cookies = 0;
		cin >> N >> A >> D;
		for (int i = 0; i < N; i++) {
			cookies += A + i * D;
		}
		cout << cookies << "\n";
	}
	return 0;
}