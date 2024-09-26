#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	int res;
	if (input.find("0x") != string::npos)
	{
		string hexN = input.substr(2);
		res = stoi(hexN, nullptr, 16);
	}
	else if (input[0] == '0') {
		string octN = input.substr(1);
		res = stoi(octN, nullptr, 8);
	}
	else {
		res = stoi(input);
	}
	cout << res;
	return 0;
}