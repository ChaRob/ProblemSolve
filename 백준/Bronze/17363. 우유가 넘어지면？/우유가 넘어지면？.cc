#include <iostream>
#include <map>
using namespace std;

char picture[100][100];
map<char, char> swapChar = { {'.','.'},{'O','O'},{'-','|'},{'|','-'},
	{'/','\\'},{'\\','/'},{'^','<'},{'<','v'},{'v','>'},{'>','^'}};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> picture[i][j];
		}
	}
	for (int j = m - 1; j >= 0; j--)
	{
		for (int i = 0; i < n; i++)
		{
			cout << swapChar[picture[i][j]];
		}
		cout << "\n";
	}
	return 0;
}