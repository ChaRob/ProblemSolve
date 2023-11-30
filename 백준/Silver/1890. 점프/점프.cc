#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
int map[100][100];
ll dp[100][100];
int dist[2][2] = { {0,1}, {1,0} };

ll dfs(int& n, int& sx, int& sy) {
    if (sx == n-1 && sy == n-1) {
        return 1;
    }
    if (dp[sx][sy] != -1) {
        return dp[sx][sy];
    }
    dp[sx][sy] = 0;
    if (map[sx][sy] == 0) {
        return 0;
    }

    for (int i = 0; i < 2; i++)
    {
        int nx = sx + dist[i][0] * map[sx][sy];
        int ny = sy + dist[i][1] * map[sx][sy];
        if (0 <= nx && nx < n && 0 <= ny && ny < n) {
            dp[sx][sy] += dfs(n, nx, ny);
        }
    }

    return dp[sx][sy];
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, start = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
            dp[i][j] = -1;
        }
    }

    cout << dfs(n, start, start);
    return 0;
}