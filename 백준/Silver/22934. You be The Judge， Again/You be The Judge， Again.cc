#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, emptySpace = 0, space;
    cin >> n;
    int size = 1 << n;
    bool check = true;
    int cutoff = ((1 << (2 * n)) - 1) / 3;

    vector<int> color(cutoff + 1, 0);
    vector<int> colorMinRow(cutoff + 1, 1e9);
    vector<int> colorMaxRow(cutoff + 1, -1);
    vector<int> colorMinCol(cutoff + 1, 1e9);
    vector<int> colorMaxCol(cutoff + 1, -1);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> space;
            if (space == 0)
            {
                emptySpace++;
                continue;
            }
            
            if (space > cutoff || space < 1)
            {
                check = false;
                continue;
            }

            color[space]++;
            colorMinRow[space] = min(colorMinRow[space], i);
            colorMaxRow[space] = max(colorMaxRow[space], i);
            colorMinCol[space] = min(colorMinCol[space], j);
            colorMaxCol[space] = max(colorMaxCol[space], j);
        }
    }
    if (emptySpace != 1)
        check = false;

    for (int i = 1; i < cutoff; i++)
    {
        if (color[i] != 3)
        {
            check = false;
            break;
        }
        if ((colorMaxRow[i] - colorMinRow[i]) != 1 ||
            (colorMaxCol[i] - colorMinCol[i]) != 1)
        {
            check = false;
            break;
        }
    }
    cout << (check ? 1 : 0);
    return 0;
}