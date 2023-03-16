#include<iostream>
using namespace std;
int main() {
	int grade;
	char c;
	cin >> grade;
	if (grade >= 90) {
		c = 'A';
	}
	else if (80 <= grade && grade < 90) {
		c = 'B';
	}
	else if (70 <= grade && grade < 80) {
		c = 'C';
	}
	else if (60 <= grade && grade < 70) {
		c = 'D';
	}
	else {
		c = 'F';
	}
	cout << c;
	return 0;
}