#include<iostream>
#include<queue>
using namespace std;

bool hall[100][100];
bool visited[100][100];
short dir[4][2] = { { -1,0 },{ 1,0 },{ 0,-1 }, { 0,1 } };

int Bfs(int& start_x, int& start_y, int& n, int& m) {
	int size = 1;
	queue<pair<int, int>> que;
	que.push(make_pair(start_x, start_y));
	visited[start_x][start_y] = true;
	while (!que.empty()) {
		pair<int, int> now = que.front();
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = now.first + dir[i][0];
			int ny = now.second + dir[i][1];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (hall[nx][ny] && !visited[nx][ny]) {
					visited[nx][ny] = true;
					que.push(make_pair(nx, ny));
					size++;
				}
			}
		}
	}
	return size;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		hall[x-1][y-1] = true;
	}
	int maxSize = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (hall[i][j] && !visited[i][j]) {
				int size = Bfs(i, j, n, m);
				maxSize = (maxSize > size) ? maxSize : size;
			}
		}
	}
	cout << maxSize;
	return 0;
}