#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << "*";
	}
	else if (a == b && b != c) {
		cout << "C";
	}
	else if (a == c && a != b) {
		cout << "B";
	}
	else if (b == c && a != b) {
		cout << "A";
	}
	return 0;
}