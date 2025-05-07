#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char c;
	while (cin >> c)
	{
		switch (c)
		{
		case 'a':
			c = '4';
			break;
		case 'e':
			c = '3';
			break;
		case 'i':
			c = '1';
			break;
		case 'o':
			c = '0';
			break;
		case 's':
			c = '5';
			break;
		default:
			break;
		}
		cout << c;
	}
	return 0;
}