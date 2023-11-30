#include <iostream>
using namespace std;

int map[100][100];

bool FindLoad(int& n, int& L, int& s, bool RC) {
    int Lcnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (RC) {
            if (abs(map[s][i] - map[s][i - 1]) > 1) {
                return false;
            }

            if (map[s][i] > map[s][i - 1]) {
                if (Lcnt >= L) {
                    Lcnt -= L;
                }
                else {
                    return false;
                }
            }
            else if (map[s][i] < map[s][i - 1]) {
                int j = 1;
                while (L != j) {
                    if (i + j < n && map[s][i+j] == map[s][i])
                        j++;
                    else
                        return false;
                }
                Lcnt = -1;
                i += L - 1;
            }
        }
        else {
            if (abs(map[i][s] - map[i - 1][s]) > 1) {
                return false;
            }

            if (map[i][s] > map[i-1][s]) {
                if (Lcnt >= L) {
                    Lcnt -= L;
                }
                else {
                    return false;
                }
            }
            else if (map[i][s] < map[i-1][s]) {
                int j = 1;
                while (L != j) {
                    if (i+j < n && map[i+j][s] == map[i][s])
                        j++;
                    else
                        return false;
                }
                Lcnt = -1;
                i += L - 1;
            }
        }

        Lcnt++;
    }
    return true;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, L, cnt = 0;
    cin >> n >> L;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (FindLoad(n, L, i, false)) {
            cnt++;
        }
        if (FindLoad(n, L, i, true)) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}