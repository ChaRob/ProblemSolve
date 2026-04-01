#include <iostream>
#include <string>
using namespace std;

string BuildPath(int _n, int _m, int _l)
{
    int minDist = (_n - 1) + (_m - 1);

    if (_l < minDist)
        return "-1";

    if (((_l - minDist) & 1) != 0)
        return "-1";

    string path;
    int extra = _l - minDist;

    for (int i = 0; i < extra / 2; i++)
        path += "DU";

    path.append(_n - 1, 'D');
    path.append(_m - 1, 'R');

    return path;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k, l;
    cin >> n >> m >> k >> l;
    for (int i = 0; i < k; i++)
    {
        int r, c;
        cin >> r >> c;
    }
    cout << BuildPath(n, m, l);
    return 0;
}