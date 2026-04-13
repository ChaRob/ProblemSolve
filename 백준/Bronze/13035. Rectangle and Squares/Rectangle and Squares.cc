#include <iostream>
using namespace std;
using ll = long long;

ll Abs(ll val)
{
    return (val < 0) ? -val : val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll area = a * b, unit = c * c;
        ll quotient = area / unit;
        ll lower = (quotient == 0) ? unit : quotient * unit;
        ll upper = (quotient + 1) * unit;
        if (Abs(area - lower) <= Abs(area - upper))
            cout << lower << "\n";
        else
            cout << upper << "\n";
    }
    return 0;
}