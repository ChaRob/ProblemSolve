#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char t, o;
	cin >> t >> o;
	if (t == o) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}