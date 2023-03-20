#include<iostream>
using namespace std;
int main() {
	int modul[42] = { 0 };
	int n,cnt = 0;
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	for (int i = 1; i <= 10; i++) {
		cin >> n;
		modul[n % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (modul[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}