#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int row = abs((a % 4 ? a % 4 : 4) - (b % 4 ? b % 4 : 4));
	int col = abs((a - 1) / 4 - (b - 1) / 4);
	cout << row + col;
	return 0;
}