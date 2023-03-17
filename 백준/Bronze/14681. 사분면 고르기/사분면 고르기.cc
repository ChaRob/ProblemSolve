#include<iostream>
using namespace std;
int main() {
	int x, y, Quadrant;
	cin >> x >> y;
	if (x > 0) {
		if (y > 0)
			Quadrant = 1;
		else
			Quadrant = 4;
	}
	else {
		if (y > 0) {
			Quadrant = 2;
		}
		else {
			Quadrant = 3;
		}
	}
	cout << Quadrant;
	return 0;
}