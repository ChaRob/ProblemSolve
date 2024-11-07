#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	while (getline(cin,input))
	{
		for (char c : input)
			switch (c)
			{
			case 'i':
				cout << 'e';
				break;
			case 'e':
				cout << 'i';
				break;
			case 'I':
				cout << 'E';
				break;
			case 'E':
				cout << 'I';
				break;
			default:
				cout << c;
				break;
			}
		cout << "\n";
	}
	return 0;
}