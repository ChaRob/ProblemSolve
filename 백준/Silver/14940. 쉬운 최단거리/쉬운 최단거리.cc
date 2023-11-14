#include <iostream>
#include <queue>
using namespace std;

int graph[1000][1000];
int dist[1000][1000];
int delta[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };

struct pos {
    int x = 0;
    int y = 0;
};

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    queue<pos> que;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
            if (graph[i][j] == 2) {
                pos Start = { i,j };
                que.push(Start);
            }
        }
    }

    while (!que.empty()) {
        pos nowPos = que.front();
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = nowPos.x + delta[i][0];
            int ny = nowPos.y + delta[i][1];
            if (0 <= nx && nx < n && 0 <= ny && ny < m && graph[nx][ny] == 1 && dist[nx][ny] == 0) {
                pos newPos = { nx,ny };
                dist[nx][ny] = dist[nowPos.x][nowPos.y] + 1;
                que.push(newPos);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] == 1 && dist[i][j] == 0) {
                cout << -1 << " ";
            }
            else {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}