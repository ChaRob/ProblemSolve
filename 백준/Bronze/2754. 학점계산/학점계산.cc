#include<iostream>
using namespace std;
int main() {
	char c[3];
	cin >> c;
	if (c[0] == 'A') {
		switch (c[1])
		{
		case '+':
			cout << 4.3;
			break;
		case '0':
			cout << "4.0";
			break;
		case '-':
			cout << 3.7;
			break;
		}
	}
	else if (c[0] == 'B') {
		switch (c[1])
		{
		case '+':
			cout << 3.3;
			break;
		case '0':
			cout << "3.0";
			break;
		case '-':
			cout << 2.7;
			break;
		}
	}
	else if (c[0] == 'C') {
		switch (c[1])
		{
		case '+':
			cout << 2.3;
			break;
		case '0':
			cout << "2.0";
			break;
		case '-':
			cout << 1.7;
			break;
		}
	}
	else if (c[0] == 'D') {
		switch (c[1])
		{
		case '+':
			cout << 1.3;
			break;
		case '0':
			cout << "1.0";
			break;
		case '-':
			cout << 0.7;
			break;
		}
	}
	else {
		cout << "0.0";
	}
	return 0;
}