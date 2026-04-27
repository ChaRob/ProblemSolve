#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int res[5][5] = {};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int students[5];
        for (int j = 0; j < 5; j++)
        {
            cin >> students[j];
        }

        for (int x = 0; x < 4; x++)
        {
            for (int y = x + 1; y < 5; y++)
            {
                if (students[x] == 1 && students[y] == 1)
                {
                    res[x][y]++;
                }
            }
        }
    }
    int maxStudent = -1, tx = 0, ty = 1;
    for (int x = 0; x < 4; x++)
    {
        for (int y = x + 1; y < 5; y++)
        {
            if (maxStudent < res[x][y])
            {
                maxStudent = res[x][y];
                tx = x;
                ty = y;
            }
        }
    }
    cout << maxStudent << '\n';
    for (int i = 0; i < 5; i++)
    {
        if (i == tx || i == ty)
            cout << "1 ";
        else
            cout << "0 ";
    }
    return 0;
}