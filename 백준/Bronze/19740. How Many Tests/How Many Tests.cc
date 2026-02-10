#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	string minTest = "0", maxTest;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		string input;
		cin >> input;
		while (input.size() > maxTest.size())
			maxTest += "9";
		if (input > minTest)
			minTest = input;
	}
	int size = minTest.size();
	string tens = to_string((int)pow(10, size - 1));
	if (minTest < tens)
	{
		minTest = tens;
	}
	cout << minTest << "\n" << maxTest;
	return 0;
}