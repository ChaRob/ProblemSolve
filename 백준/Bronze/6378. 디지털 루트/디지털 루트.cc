#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	while (true)
	{
		cin >> input;
		if (input == "0") break;
		while (input.size() > 1) {
			int newNum = 0;
			for (char c : input) {
				newNum += c - '0';
			}
			input = to_string(newNum);
		}
		cout << input << "\n";
	}
	return 0;
}