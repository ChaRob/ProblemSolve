#include<iostream>
#include<string>
using namespace std;

int main() {
	bool check[3] = {};
	string input;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		switch (input[0])
		{
		case 'l':
			check[0] = true;
			break;
		case 'k':
			check[1] = true;
			break;
		case 'p':
			check[2] = true;
		default:
			break;
		}
	}
	if (check[0] == true && check[1] == true && check[2] == true) cout << "GLOBAL";
	else cout << "PONIX";
	return 0;
}