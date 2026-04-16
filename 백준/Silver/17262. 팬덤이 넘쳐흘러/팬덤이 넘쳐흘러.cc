#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, mine = 1000000, maxs = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        maxs = max(maxs, s);
        mine = min(mine, e);
    }
    int ans = max(0, maxs - mine);
    cout << ans;
    return 0;
}