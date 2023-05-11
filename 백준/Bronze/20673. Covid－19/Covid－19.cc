#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int p, q;
	cin >> p >> q;
	if (q > 30) {
		cout << "Red";
	}
	else if (q <= 10 && p <= 50) {
		cout << "White";
	}
	else {
		cout << "Yellow";
	}
	return 0;
}