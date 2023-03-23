#include<iostream>
#include<queue>
using namespace std;
int ice[300][300] = { 0 };

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m, year = 0, cnt, i, j, k, ni, nj;
    cin >> n >> m;

    int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> ice[i][j];
        }
    }
    while (1) {
        int sea[300][300] = { 0 };
        bool visited[300][300] = { false };
        cnt = 0;
        for (i = 1; i < n - 1; i++) {
            for (j = 1; j < m - 1; j++) {
                if (ice[i][j] > 0 && !visited[i][j]) {
                    queue<pair<int,int>> que;
                    int x, y;
                    visited[i][j] = true;
                    que.push(make_pair(i, j));
                    while (!que.empty()) {
                        x = que.front().first;
                        y = que.front().second;
                        que.pop();
                        for (k = 0; k < 4; k++) {
                            ni = x + dir[k][0];
                            nj = y + dir[k][1];
                            if (ice[ni][nj] == 0) {
                                sea[x][y]++;
                            }
                            else if (ice[ni][nj] > 0 && !visited[ni][nj]) {
                                visited[ni][nj] = true;
                                que.push(make_pair(ni, nj));
                            }
                        }
                    }
                    cnt++;
                }
            }
        }
        for (i = 1; i < n - 1; i++) {
            for (j = 1; j < m - 1; j++) {
                ice[i][j] = (ice[i][j] - sea[i][j] > 0) ? ice[i][j] - sea[i][j] : 0;
            }
        }
        if (cnt > 1) {
            break;
        }
        else if (cnt == 0) {
            year = 0;
            break;
        }
        year++;
    }
    cout << year;
    return 0;
}