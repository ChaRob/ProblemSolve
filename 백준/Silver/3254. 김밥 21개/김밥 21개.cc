#include <iostream>
using namespace std;

pair<int, int> dir[8] = {
	{0,-1},{1,-1},{1,0},{1,1},
	{0,1},{-1,1},{-1,0},{-1,-1}
};

bool CheckContinuous(int board[7][8], int sx, int sy, int who)
{
	for (int d = 0; d < 4; d++)
	{
		int ns = sx + dir[d].first;
		int ny = sy + dir[d].second;
		int cnt = 1;
		while (ns > 0 && ns < 7 && ny > 0 && ny < 8 && board[ns][ny] == who)
		{
			cnt++;
			ns += dir[d].first;
			ny += dir[d].second;
		}
		ns = sx + dir[d + 4].first;
		ny = sy + dir[d + 4].second;
		while (ns > 0 && ns < 7 && ny > 0 && ny < 8 && board[ns][ny] == who)
		{
			cnt++;
			ns += dir[d + 4].first;
			ny += dir[d + 4].second;
		}
		if (cnt >= 4)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int board[7][8] = { 0 };
	int index[8] = { 0,1,1,1,1,1,1,1 };
	int winner = 0, idx;
	for (int i = 0; i < 21; i++)
	{
		int s, j;
		cin >> s >> j;
		int sy = index[s]++;
		int jy = index[j]++;
		board[sy][s] = 1;
		board[jy][j] = 2;
		
		bool sr = CheckContinuous(board, sy, s, 1);
		bool jr = CheckContinuous(board, jy, j, 2);
		if (sr == true)
		{
			winner = 1; idx = i + 1;
			break;
		}
		else if (jr == true)
		{
			winner = 2; idx = i + 1;
			break;
		}
	}
	if (winner == 0)
	{
		cout << "ss";
	}
	else if (winner == 1)
	{
		cout << "sk " << idx;
	}
	else if (winner == 2)
	{
		cout << "ji " << idx;
	}
	return 0;
}