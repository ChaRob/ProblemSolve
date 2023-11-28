#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int minx = 10000, miny = 10000;
    int maxx = -10000, maxy = -10000;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        minx = (minx < x)? minx : x;
        maxx = (maxx > x)? maxx : x;
        miny = (miny < y)? miny : y;
        maxy = (maxy > y)? maxy : y;
    }
    cout << (maxx - minx) * (maxy - miny);
    return 0;
}