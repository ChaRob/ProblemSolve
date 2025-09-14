#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, myViewSum = 0, notRegistered = 0;
	cin >> n;
	int* views = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> views[i];
		myViewSum += views[i];
	}
	cout << myViewSum << "\n";
	for (int i = 0; i < n; i++) {
		int isRegistered;
		cin >> isRegistered;
		if (isRegistered == 0) {
			notRegistered += views[i];
		}
	}
	cout << notRegistered;
	delete[] views;
	return 0;
}