#include<iostream>
using namespace std;

short paper[10][10] = { 0 };
short paper_size[5] = { 0 };
short paper_cnt = 100;

bool Candraw(int x, int y, int size) {
	for (size_t i = 0; i < size + 1; i++)
	{
		for (size_t j = 0; j < size + 1; j++)
		{
			if (x + i > 9 || y + j > 9 || paper[x + i][y + j] == 0) {
				return false;
			}
		}
	}
	return true;
}

void draw(int x, int y, int size, int attach_num) {
	for (size_t i = 0; i < size + 1; i++)
	{
		for (size_t j = 0; j < size + 1; j++)
		{
			if (x + i <= 9 && y + j <= 9) {
				paper[x + i][y + j] = attach_num;
			}
		}
	}
}

void backtrack(int x, int y, int cnt) {
	if (y > 9) {
		x++;
		y = 0;
		if (x > 9) {
			paper_cnt = (paper_cnt < cnt) ? paper_cnt : cnt;
			return;
		}
	}
	while (paper[x][y] == 0) {
		y++;
		if (y > 9) {
			y = 0;
			x++;
			if (x > 9) {
				break;
			}
		}
	}

	if (x == 10) {
		paper_cnt = (paper_cnt < cnt) ? paper_cnt : cnt;

	}
	else {
		for (int size = 4; size >= 0; size--)
		{
			if (paper_size[size]!=5 && Candraw(x, y, size))
			{
				paper_size[size]++;
				draw(x, y, size, 0);
				backtrack(x, y + 1, cnt + 1);
				paper_size[size]--;
				draw(x, y, size, 1);
			}
		}	
	}
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cin >> paper[i][j];
		}
	}
	backtrack(0, 0, 0);

	if (paper_cnt == 100) {
		cout << -1;
	}
	else {
		cout << paper_cnt;
	}
	return 0;
}