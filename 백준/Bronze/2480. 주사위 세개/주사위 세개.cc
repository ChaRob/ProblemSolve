#include<iostream>
using namespace std;
int main() {
	int dice[3],tmp;
	for (int i = 0; i < 3; i++) {
		cin >> dice[i];
	}
	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (dice[j] > dice[j + 1]) {
				tmp = dice[j];
				dice[j] = dice[j + 1];
				dice[j + 1] = tmp;
			}
		}
	}
	if (dice[0] == dice[1] && dice[1] == dice[2]) {
		cout << 10000 + dice[0] * 1000;
	}
	else if (dice[0] == dice[1] || dice[1] == dice[2]) {
		cout << 1000 + dice[1] * 100;
	}
	else {
		int max = 0;
		for (int i = 0; i <= 2; i++) {
			if (dice[i] > max) {
				max = dice[i];
			}
		}
		cout << max*100;
	}
	return 0;
}