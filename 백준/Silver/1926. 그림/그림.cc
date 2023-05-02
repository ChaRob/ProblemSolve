#include<iostream>
#include<queue>
using namespace std;

int bfs(int i, int j, short **board, bool **visited, int n, int m) {
	int x, y, nx, ny, area = 1;
	int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
	queue<pair<int, int>> que;
	que.push(make_pair(i, j));
	while (!que.empty()) {
		x = que.front().first;
		y = que.front().second;
		que.pop();
		for (int d = 0; d < 4; d++)
		{
			nx = x + dir[d][0];
			ny = y + dir[d][1];
			if (0 <= nx && nx < n && 0 <= ny && ny < m && !visited[nx][ny] && board[nx][ny] == 1) {
				visited[nx][ny] = true;
				que.push(make_pair(nx, ny));
				area++;
			}
		}
	}
	return area;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, m, max_area = 0, cnt = 0, tmp;
	cin >> n >> m;
	short **board = new short *[n];
	bool **visited = new bool *[n];
	for (int i = 0; i < n; i++)
	{
		board[i] = new short[m] {0};
		visited[i] = new bool[m] {false};
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!visited[i][j] && board[i][j] == 1) {
				cnt++;
				visited[i][j] = true;
				tmp = bfs(i, j, board, visited, n, m);
				max_area = (max_area > tmp) ? max_area : tmp;
			}
		}
	}
	cout << cnt << "\n" << max_area;

	for (int i = 0; i < n; i++)
	{
		delete[] board[i], visited[i];
	}
	delete[] board, visited;

	return 0;
}