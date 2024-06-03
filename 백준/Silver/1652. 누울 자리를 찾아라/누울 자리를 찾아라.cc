#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string* room = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> room[i];
	}
	int sumC = 0, sumR = 0;
	for (int i = 0; i < n; i++)
	{
		int row = 0, col = 0;
		for (int j = 0; j < n; j++)
		{
			if (room[i][j] == '.') {
				col++;
				if (j == n - 1 and col >= 2) sumC++;
			}
			else {
				if (col >= 2) {
					sumC++;
				}
				col = 0;
			}

			if (room[j][i] == '.') {
				row++;
				if (j == n - 1 and row >= 2) sumR++;
			}
			else {
				if (row >= 2) {
					sumR++;
				}
				row = 0;
			}
		}
	}
	cout << sumC << " " << sumR;
	delete[] room;
	return 0;
}