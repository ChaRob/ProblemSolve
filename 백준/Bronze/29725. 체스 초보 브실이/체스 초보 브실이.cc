#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string board;
	int white = 0, black = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> board;
		for (char c : board)
		{
			switch (c)
			{
			case 'P':
				white++;
				break;
			case 'N':
				white += 3;
				break;
			case 'B':
				white += 3;
				break;
			case 'R':
				white += 5;
				break;
			case 'Q':
				white += 9;
				break;
			case 'p':
				black++;
				break;
			case 'n':
				black += 3;
				break;
			case 'b':
				black += 3;
				break;
			case 'r':
				black += 5;
				break;
			case 'q':
				black += 9;
				break;
			default:
				break;
			}
		}
	}
	cout << white - black;
	return 0;
}