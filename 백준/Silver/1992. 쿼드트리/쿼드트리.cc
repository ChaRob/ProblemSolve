#include <iostream>
using namespace std;

char movie[64][64] = { '\0' };

void press(int start_x, int start_y, int end_x, int end_y, int size) {
	if (size == 1) {
		cout << movie[start_x][start_y];
		return;
	}
	bool check = true;

	for (int i = start_x; i <= end_x; i++)
	{
		for (int j = start_y; j <= end_y; j++)
		{
			if (movie[start_x][start_y] != movie[i][j]) {
				check = false;
				i = 64;
				j = 64;
			}
		}
	}
	if (check) {
		cout << movie[start_x][start_y];
	}
	else {
		int mid_x = (start_x + end_x) / 2;
		int mid_y = (start_y + end_y) / 2;
		cout << "(";
		press(start_x, start_y, mid_x, mid_y, size / 2);
		press(start_x, mid_y + 1, mid_x, end_y, size / 2);
		press(mid_x + 1, start_y, end_x, mid_y, size / 2);
		press(mid_x + 1, mid_y + 1, end_x, end_y, size / 2);
		cout << ")";
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> movie[i][j];
		}
	}
	press(0, 0, n-1, n-1, n);
	return 0;
}