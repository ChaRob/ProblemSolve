#include<iostream>
using namespace std;
int main() {
	int subject[1001] = { 0 };
	int n,maxgrade = 0;
	float gradesum = 0;
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> subject[i];
		if (maxgrade < subject[i]) {
			maxgrade = subject[i];
		}
	}
	for (int i = 0; i < n; i++) {
		gradesum += subject[i] / float(maxgrade) * 100;
	}
	printf("%.4f", gradesum / n);
	return 0;
}