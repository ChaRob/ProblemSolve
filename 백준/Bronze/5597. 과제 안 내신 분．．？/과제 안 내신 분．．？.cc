#include<iostream>
using namespace std;
int main() {
	int n;
	int A[31] = { false };
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	for (int i = 0; i < 28; i++) {
		cin >> n;
		A[n] = true;
	}
	for (int i = 1; i <= 30; i++) {
		if (!A[i]) {
			cout << i << "\n";
		}
	}
	return 0;
}