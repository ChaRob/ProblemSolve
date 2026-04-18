#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        ll n, m, k, d, b, ans;
        cin >> n >> m >> k >> d;
        ll aCnt = n * m * (m - 1) / 2 * k;
        ll bCnt = n * (n - 1) / 2 * m * m;
        ll cut = aCnt + bCnt;
        b = d / cut;
        if (b == 0)
            ans = -1;
        else
            ans = b * cut;
        cout << ans << "\n";
    }
    return 0;
}