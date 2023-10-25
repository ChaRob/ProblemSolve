#include<iostream>
#include<queue>
using namespace std;

int map[100][100];
int dist[100][100];
int island[100][100];
int minDist = 100000;
int dir[4][2] = { {1,0}, {-1,0}, {0,1}, {0,-1} };

void solve(queue<pair<int,int>> que, int n) {
	while (!que.empty()) {
		pair<int, int> front = que.front();
		int x = front.first, y = front.second;
		que.pop();

		for (int k = 0; k < 4; k++)
		{
			int nx = x + dir[k][0];
			int ny = y + dir[k][1];
			if (0 <= nx && nx < n && 0 <= ny && ny < n &&
				map[nx][ny] == 0) {
				if (island[nx][ny] == 0) {
					que.push(make_pair(nx, ny));
					dist[nx][ny] = dist[x][y] + 1;
					island[nx][ny] = island[x][y];
				}
				else if(island[nx][ny] != island[x][y] && minDist > dist[nx][ny] + dist[x][y]) {
					minDist = dist[nx][ny] + dist[x][y];
				}
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, i, j;
	cin >> n;
	queue<pair<int, int>> que, check;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
	int islandCnt = 1;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (map[i][j] == 1 && island[i][j] == 0) {
				check.push(make_pair(i,j));
				island[i][j] = islandCnt++;

				while (!check.empty()) {
					pair<int, int> front = check.front();
					check.pop();

					for (int k = 0; k < 4; k++)
					{
						int nx = front.first + dir[k][0];
						int ny = front.second + dir[k][1];
						if (0 <= nx && nx < n && 0 <= ny && ny < n &&
							map[nx][ny] == 1 && island[nx][ny] == 0) {
							check.push(make_pair(nx, ny));
							dist[nx][ny] = 0;
							island[nx][ny] = island[front.first][front.second];
						}
					}
					for (int k = 0; k < 4; k++)
					{
						int nx = front.first + dir[k][0];
						int ny = front.second + dir[k][1];
						if (0 <= nx && nx < n && 0 <= ny && ny < n &&
							map[nx][ny] == 0) {
							que.push(make_pair(front.first, front.second));
							break;
						}
					}
				}
			}
		}
	}
	solve(que, n);
	cout << minDist;

	return 0;
}