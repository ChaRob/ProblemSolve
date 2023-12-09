#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int ramda;
	cin >> ramda;
	if (620 <= ramda && ramda <= 780) {
		cout << "Red";
	}
	else if (590 <= ramda && ramda <= 620) {
		cout << "Orange";
	}
	else if (590 <= ramda && ramda <= 620) {
		cout << "Orange";
	}
	else if (570 <= ramda && ramda <= 590) {
		cout << "Yellow";
	}
	else if (495 <= ramda && ramda <= 570) {
		cout << "Green";
	}
	else if (450 <= ramda && ramda <= 495) {
		cout << "Blue";
	}
	else if (425 <= ramda && ramda <= 450) {
		cout << "Indigo";
	}
	else if (380 <= ramda && ramda <= 425) {
		cout << "Violet";
	}
	return 0;
}