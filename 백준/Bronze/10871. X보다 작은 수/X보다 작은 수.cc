#include<iostream>
using namespace std;
int main() {
	int n,x;
	int A;
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> A;
		if (A < x) {
			cout << A << " ";
		}
	}
	return 0;
}