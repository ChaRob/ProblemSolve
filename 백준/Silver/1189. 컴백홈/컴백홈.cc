#include <iostream>
using namespace std;

int graph[5][5];
int cnt[5][5][26];
bool visited[5][5];
int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };

int dfs(const int& x, const int& y, int len, int& R, int& C, int& K) {
	if (x == 0 && y == C - 1) {
		if (len == K) {
			return 1;
		}
	}

	if (len > K) {
		return 0;
	}
	cnt[x][y][len] = 0;
	visited[x][y] = true;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (0 <= nx && nx < R && 0 <= ny && ny < C) {
			if (graph[nx][ny] != -1 && !visited[nx][ny]) {
				cnt[x][y][len] += dfs(nx, ny, len + 1, R, C, K);
			}
		}
	}
	visited[x][y] = false;
	return cnt[x][y][len];
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int R, C, K;
	cin >> R >> C >> K;
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			char c;
			cin >> c;
			if (c == '.') {
				graph[i][j] = 0;
			}
			else {
				graph[i][j] = -1;
			}
			for (int m = 0; m <= K; m++)
			{
				cnt[i][j][m] = -1;
			}
		}
	}
	cout << dfs(R - 1, 0, 1, R, C, K);
	return 0;
}