#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int ReturnValue(bool type, int num) {
	return (type) ? num : pow(10, num);
}

int solve(string input, bool type) {
	if (input == "black") {
		return ReturnValue(type, 0);
	}
	else if (input == "brown") {
		return ReturnValue(type, 1);
	}
	else if (input == "red") {
		return ReturnValue(type, 2);
	}
	else if (input == "orange") {
		return ReturnValue(type, 3);
	}
	else if (input == "yellow") {
		return ReturnValue(type, 4);
	}
	else if (input == "green") {
		return ReturnValue(type, 5);
	}
	else if (input == "blue") {
		return ReturnValue(type, 6);
	}
	else if (input == "violet") {
		return ReturnValue(type, 7);
	}
	else if (input == "grey") {
		return ReturnValue(type, 8);
	}
	else if (input == "white") {
		return ReturnValue(type, 9);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long value = 0;
	string input;
	cin >> input;
	value += solve(input, true) * 10;
	cin >> input;
	value += solve(input, true);
	cin >> input;
	value *= solve(input, false);
	cout << value;
	return 0;
}