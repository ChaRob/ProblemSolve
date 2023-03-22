#include<iostream>
#include<deque>
using namespace std;
int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	char miro[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> miro[i][j];
		}
	}
	deque<pair<int, int>> que;
	int dist[100][100] = { 0 }, x, y, nx, ny;
	que.push_back(pair<int,int>(0, 0));
	dist[0][0] = 1;
	while (!que.empty()) {
		x = que[0].first;
		y = que[0].second;
		que.pop_front();
		for (int i = 0; i < 4; i++) {
			nx = x + dir[i][0];
			ny = y + dir[i][1];
			if (0 <= nx && nx < n && 0 <= ny && ny < m && miro[nx][ny] == '1' && dist[nx][ny] == 0) {
				dist[nx][ny] = dist[x][y] + 1;
				que.push_back(pair<int, int>(nx, ny));
			}
		}
	}
	cout << dist[n - 1][m - 1];
	return 0;
}