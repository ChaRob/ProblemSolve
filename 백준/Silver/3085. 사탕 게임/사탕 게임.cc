#include<iostream>
using namespace std;

int max_length;
char candy[51][51];
int direct[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };

void swap(int i, int j, int ni, int nj) {
	char tmp = candy[i][j];
	candy[i][j] = candy[ni][nj];
	candy[ni][nj] = tmp;
}

void candy_board(int n, int start_x, int start_y, int dir) {
	int cnt = 0;
	int nx = start_x, ny = start_y;
	while (0 <= nx && nx < n && 0 <= ny && ny < n && candy[nx][ny] == candy[start_x][start_y]) {
		nx += direct[(dir + 2) % 4][0];
		ny += direct[(dir + 2) % 4][1];
		cnt++;
	}
	nx = start_x + direct[(dir + 3) % 4][0];
	ny = start_y + direct[(dir + 3) % 4][1];
	while (0 <= nx && nx < n && 0 <= ny && ny < n && candy[nx][ny] == candy[start_x][start_y]) {
		nx += direct[(dir + 3) % 4][0];
		ny += direct[(dir + 3) % 4][1];
		cnt++;
	}
	max_length = (max_length > cnt) ? max_length : cnt;
}

void find_maxlength(int n) {
	int ni, nj;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int delta = 0; delta < 4; delta++)
			{
				ni = i + direct[delta][0];
				nj = j + direct[delta][1];
				if (0 <= ni && ni < n && 0 <= nj && nj < n) {
					swap(i, j, ni, nj);
					candy_board(n, i, j, 0);
					candy_board(n, i, j, 2);
					swap(i, j, ni, nj);
				}
			}
		}
	}
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> candy[i][j];
		}
	}

	find_maxlength(n);

	cout << max_length;

	return 0;
}