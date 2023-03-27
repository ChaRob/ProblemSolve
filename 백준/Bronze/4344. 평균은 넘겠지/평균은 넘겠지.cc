#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cout << fixed;
	cout.precision(3);
	int c;
	cin >> c;
	for (int test = 1; test <= c; test++) {
		int n, grade[1000] = { 0 }, sum = 0, student_cnt = 0;
		float mean, percent;

		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> grade[i];
			sum += grade[i];
		}
		mean = float(sum) / n;
		for (int i = 0; i < n; i++) {
			if (grade[i] > mean) {
				student_cnt++;
			}
		}
		percent = float(student_cnt) * 100 / n;
		cout << percent << "%" << "\n";
	}

	return 0;
}