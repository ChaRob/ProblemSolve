#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	cin >> input;
	for (int i = 0; i < input.size() % 3; i++)
	{
		input = '0' + input;
	}
	for (int i = 0; i < input.size() / 3; i++)
	{
		string tmp = input.substr(i * 3, 3);
		int res;
		if (tmp == "000") res = 0;
		else if (tmp == "001") res = 1;
		else if (tmp == "010") res = 2;
		else if (tmp == "011") res = 3;
		else if (tmp == "100") res = 4;
		else if (tmp == "101") res = 5;
		else if (tmp == "110") res = 6;
		else res = 7;
		cout << res;
	}
	return 0;
}