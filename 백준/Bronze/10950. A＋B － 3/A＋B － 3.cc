#include<iostream>
using namespace std;
int main() {
	int T,a,b;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}