#include<iostream>
#include<string>
using namespace std;

int main() {
	string input, maxInput;
	int val, maxVal = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> input >> val;
		if (maxVal < val) {
			maxVal = val;
			maxInput = input;
		}
	}
	cout << maxInput;
	return 0;
}