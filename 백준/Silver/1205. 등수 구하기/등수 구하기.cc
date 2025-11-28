#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, tPoint, p;
    cin >> n >> tPoint >> p;
    vector<int> rank(n + 1);
    rank[0] = 2100000000;
    for (int i = 1; i <= n; i++)
    {
        int point;
        cin >> point;
        rank[i] = point;
    }
    int ans = 1, i;
    if (n == p && rank[n] >= tPoint)
    {
        ans = -1;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (rank[i] < rank[i - 1])
                ans = i;

            if (rank[i] <= tPoint)
                break;
        }
        if (i == n + 1) ans = i;
    }
    cout << ans;
    return 0;
}