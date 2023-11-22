#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int x, y, cx, cy;
    int map[100][100] = {}, cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> x >> y >> cx >> cy;
        for (int row = x; row < cx; row++)
        {
            for (int col = y; col < cy; col++)
            {
                map[row][col] = 1;
            }
        }
    }
    for (int row = 0; row < 100; row++)
    {
        for (int col = 0; col < 100; col++)
        {
            if (map[row][col] == 1) {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}