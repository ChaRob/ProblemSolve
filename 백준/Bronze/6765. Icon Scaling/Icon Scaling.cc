#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	char arr[3][3] = { {'*','x','*'},{' ','x','x'},{'*',' ','*'} };
	for (int i = 0; i < k * 3; i++)
	{
		for (int j = 0; j < k * 3; j++)
		{
			cout << arr[i / k][j / k];
		}
		cout << '\n';
	}
	return 0;
}