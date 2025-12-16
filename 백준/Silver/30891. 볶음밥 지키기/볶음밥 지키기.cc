#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, r, maxCnt = 0, maxX = 0, maxY = 0;
    cin >> n >> r;
    vector<pair<int, int>> grains(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
		cin >> x >> y;
        grains[i] = { x,y };
    }
    for (int x = -100; x <= 100; x++)
    {
        for (int y = -100; y <= 100; y++)
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                int len = pow(grains[i].first - x, 2) + pow(grains[i].second - y, 2);
                if (len <= r * r)
                    cnt++;
            }
            if (cnt > maxCnt)
            {
                maxCnt = cnt;
                maxX = x;
                maxY = y;
            }
        }
    }
    cout << maxX << " " << maxY;
    return 0;
}