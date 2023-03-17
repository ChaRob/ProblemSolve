#include<iostream>
using namespace std;
int main() {
	int n,x;
	int A;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> A;
		if (A < x) {
			cout << A << " ";
		}
	}
	return 0;
}