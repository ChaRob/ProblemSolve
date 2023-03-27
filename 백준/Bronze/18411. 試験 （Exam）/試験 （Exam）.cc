#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int grade[3] = { 0 }, i, j, tmp;
	for (i = 0; i < 3; i++) {
		cin >> grade[i];
	}
	for (i = 1; i >= 0; i--) {
		for (j = 0; j <= i; j++) {
			if (grade[j] > grade[j + 1]) {
				tmp = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = tmp;
			}
		}
	}
	cout << grade[2] + grade[1];
	return 0;
}