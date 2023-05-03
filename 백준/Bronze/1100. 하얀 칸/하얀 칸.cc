#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	char chess;
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chess;
			if ((i + j) % 2 == 0 && chess == 'F') {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}