#include <string>
#include <vector>

using namespace std;

int dx[4] = { 0,1,0,-1 };
int dy[4] = { 1,0,-1,0 };

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n));
    int x = 0, y = 0, count = 0, num = 1, dir = 0;
    while (num <= n * n)
    {
        if (answer[x][y] == 0)
            answer[x][y] = num++;

        while (num <= n * n)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n || answer[nx][ny] != 0)
            {
                dir = (dir + 1) % 4;
                continue;
            }

            x = nx;
            y = ny;
            break;
        }
    }
    return answer;
}