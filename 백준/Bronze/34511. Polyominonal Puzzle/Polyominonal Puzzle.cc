#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<string> board(n);
	for (int i = 0; i < n; i++)
		cin >> board[i];
	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 'X')
			{
				for (int delta = 0; delta < 4; delta++)
				{
					int nx = i + dx[delta];
					int ny = j + dy[delta];

					if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] == 'Y')
						cnt++;
				}
			}
		}
	}
	cout << cnt;
	return 0;
}