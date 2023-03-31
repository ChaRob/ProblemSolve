#include<iostream>
using namespace std;

int direct[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
char board[20][20] = { "" };
int res = 0;

void choice(int cnt, int R, int C, bool *visited, int x, int y) {
    if (cnt > res) {
        res = cnt;
    }
    for (int i = 0; i < 4; i++)
    {
        int nx = x + direct[i][0];
        int ny = y + direct[i][1];
        if (0 <= nx && nx < R && 0 <= ny && ny < C) {
            int idx = board[nx][ny] - 'A';
            if (!visited[idx]) {
                visited[idx] = true;
                choice(cnt + 1, R, C, visited, nx, ny);
                visited[idx] = false;
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int R, C;
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> board[i][j];
        }
    }
    bool visited[26] = { false };
    int idx = board[0][0] - 'A';
    visited[idx] = true;
    choice(1, R, C, visited, 0, 0);
    cout << res;
    return 0;
}