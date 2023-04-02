#include<iostream>
using namespace std;

int paper[500][500] = { 0 };
int block[19][3][2] = {
    {{0,1},{0,2},{0,3}},{{1,0},{2,0},{3,0}},
    {{0,1},{1,0},{1,1}},
    {{1,0},{1,1},{2,1}},{{0,1},{1,1},{1,2}},{{1,0},{1,-1},{2,-1}},{{0,-1},{1,-1},{1,-2}},
    {{1,0},{2,0},{2,1}},{{1,0},{0,1},{0,2}},{{0,1},{1,1},{2,1}},{{1,0},{1,-1},{1,-2}},
    {{0,-1},{1,-1},{2,-1}},{{1,0},{1,1},{1,2}},{{1,0},{2,0},{2,-1}},{{0,-1},{0,-2},{1,0}},
    {{0,1},{0,2},{1,1}},{{0,1},{0,2},{-1,1}},{{1,0},{2,0},{1,1}},{{1,0},{2,0},{1,-1}},
};

int findblock(int x, int y, int blocknum, int n, int m) {
    int sum = paper[x][y], nx, ny;
    for (int idx = 0; idx < 3; idx++)
    {
        nx = x + block[blocknum][idx][0];
        ny = y + block[blocknum][idx][1];
        if (0 <= nx && nx < n && 0 <= ny && ny < m) {
            sum += paper[nx][ny];
        }
        else {
            return 0;
        }
    }
    return sum;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, m, res = 0, tmp;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> paper[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < 19; k++)
            {
                tmp = findblock(i, j, k, n, m);
                res = (tmp > res) ? tmp : res;
            }
        }
    }
    cout << res;
    return 0;
}