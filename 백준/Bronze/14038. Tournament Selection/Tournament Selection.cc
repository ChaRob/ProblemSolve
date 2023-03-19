#include<iostream>
using namespace std;
int main() {
	char res;
	int cnt = 0;
	for (int i = 1; i <= 6; i++) {
		cin >> res;
		if (res == 'W') {
			cnt++;
		}
	}
	if (cnt >= 5) {
		cout << 1;
	}
	else if (cnt >= 3) {
		cout << 2;
	}
	else if (cnt >= 1) {
		cout << 3;
	}
	else {
		cout << -1;
	}
	return 0;
}