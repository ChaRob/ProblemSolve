#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t1, t2;
	cin >> t1 >> t2;
	if (t1 <= t2) {
		cout << t1;
	}
	else {
		cout << t2;
	}
	return 0;
}