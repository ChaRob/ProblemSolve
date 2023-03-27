#include<iostream>
#include<math.h>
using namespace std;
int direction[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, j, nx, ny, idx, target_x, target_y, maxlike, satisfaction = 0, cnt;
    int likenum[401][4] = { 0 };
    int sharkclass[20][20] = { 0 };
    cin >> n;
    for (int i = 1; i <= n * n; i++) {
        cin >> j;
        cin >> likenum[j][0] >> likenum[j][1] >> likenum[j][2] >> likenum[j][3];
        maxlike = 0;
        int nullclass[20][20] = { 0 };
        int likesit[20][20] = { 0 };
        target_x = n-1;
        target_y = n-1;
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                if (sharkclass[x][y] == 0) {
                    for (int k = 0; k < 4; k++) {
                        nx = x + direction[k][0];
                        ny = y + direction[k][1];
                        if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                            for (idx = 0; idx < 4; idx++) {
                                if (likenum[j][idx] == sharkclass[nx][ny]) {
                                    likesit[x][y]++;
                                }
                                else if (sharkclass[nx][ny] == 0) {
                                    nullclass[x][y]++;
                                }
                            }
                        }
                    }
                    if (maxlike < likesit[x][y]) {
                        maxlike = likesit[x][y];
                        target_x = x;
                        target_y = y;
                    }
                    else if (maxlike == likesit[x][y]) {
                        if (nullclass[target_x][target_y] < nullclass[x][y]) {
                            target_x = x;
                            target_y = y;
                        }
                        else if (nullclass[target_x][target_y] == nullclass[x][y]) {
                            if (target_x > x) {
                                target_x = x;
                                target_y = y;
                            }
                            else if (target_x == x && target_y > y) {
                                target_x = x;
                                target_y = y;
                            }
                        }
                    }
                }
            }
        }
        sharkclass[target_x][target_y] = j;
    }
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            cnt = -1;
            for (int k = 0; k < 4; k++) {
                nx = x + direction[k][0];
                ny = y + direction[k][1];
                if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                    for (idx = 0; idx < 4; idx++) {
                        if (likenum[sharkclass[x][y]][idx] == sharkclass[nx][ny]) {
                            cnt++;
                        }
                    }
                }
            }
            satisfaction += int(pow(10, cnt));
        }
    }
    cout << satisfaction;
    return 0;
}