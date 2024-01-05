#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int a, b, won = 0;
		cin >> a >> b;
		if (a == 0);
		else if (a <= 1) {
			won += 5000000;
		}
		else if (a <= 3) {
			won += 3000000;
		}
		else if (a <= 6) {
			won += 2000000;
		}
		else if (a <= 10) {
			won += 500000;
		}
		else if (a <= 15) {
			won += 300000;
		}
		else if (a <= 21) {
			won += 100000;
		}

		if (b == 0);
		else if (b <= 1) {
			won += 5120000;
		}
		else if (b <= 3) {
			won += 2560000;
		}
		else if (b <= 7) {
			won += 1280000;
		}
		else if (b <= 15) {
			won += 640000;
		}
		else if (b <= 31) {
			won += 320000;
		}
		cout << won << "\n";
	}
	return 0;
}