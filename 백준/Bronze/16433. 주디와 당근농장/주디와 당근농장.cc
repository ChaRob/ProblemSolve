#include <iostream>
#include <queue>
using namespace std;

bool field[99][99];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r, c;
    cin >> n >> r >> c;
    queue<pair<int, int>> que;
    que.push({ r - 1, c - 1 });
    field[r - 1][c - 1] = true;
    while (!que.empty())
    {
        auto [x, y] = que.front();
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !field[nx][ny])
            {
                if (!field[x][y])
                    field[nx][ny] = true;
                que.push({ nx,ny });
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (field[i][j] == true)
                cout << "v";
            else
                cout << ".";
        }
        cout << "\n";
    }
    return 0;
}