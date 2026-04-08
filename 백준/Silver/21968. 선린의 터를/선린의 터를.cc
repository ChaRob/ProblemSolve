#include <iostream>
using namespace std;

using ll = long long;

ll PowLong(ll s, ll n)
{
    ll tmp = 1, idx = 0;
    while (idx++ < n)
    {
        tmp *= s;
    }
    return tmp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        ll n;
        cin >> n;
        ll idx = 0, check = 0, val = 0;
        while (idx < 64)
        {
            check = n & static_cast<ll>(1) << idx;
            if (check == 0)
            {
                idx++;
                continue;
            }
            else
            {
                val += PowLong(3, idx);
                idx++;
            }
        }
        cout << val << "\n";
    }
    return 0;
}