#include<iostream>
using namespace std;

int direct[4][2] = { {-1,0},{-1,1},{0,1},{1,1} };

int isBingo(int x, int y, int bingo_board[][5]) {
	int cnt = 0, space, nx, ny;
	bingo_board[x][y] = 0;
	for (int i = 0; i < 4; i++)
	{
		space = 1;

		nx = x + direct[i][0];
		ny = y + direct[i][1];
		while (0 <= nx && nx < 5 && 0 <= ny && ny < 5 && bingo_board[nx][ny] == 0) {
			space++;
			nx += direct[i][0];
			ny += direct[i][1];
		}
		nx = x - direct[i][0];
		ny = y - direct[i][1];
		while (0 <= nx && nx < 5 && 0 <= ny && ny < 5 && bingo_board[nx][ny] == 0) {
			space++;
			nx -= direct[i][0];
			ny -= direct[i][1];
		}
		if (space == 5) {
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int bingo_board[5][5];
	int bingo_seq, BingoCnt = 0;
	for (int i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			cin >> bingo_board[i][j];
		}
	}
	for (int i = 1; i <= 25; i++)
	{
		cin >> bingo_seq;
		bool find = false;
		int x, y;
		for (x = 0; x < 5; x++)
		{
			for (y = 0; y < 5; y++)
			{
				if (bingo_board[x][y] == bingo_seq) {
					find = true;
					break;
				}
			}
			if (find) {
				break;
			}
		}
		BingoCnt += isBingo(x, y, bingo_board);
		if (BingoCnt >= 3) {
			cout << i;
			break;
		}
	}

	return 0;
}