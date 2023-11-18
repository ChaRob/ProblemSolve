#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	double num, galon = 3.785411784, mile = 1609.344;
	cin >> num;
	cout << fixed << setprecision(6) << galon / (num * mile / 100000);
	return 0;
}