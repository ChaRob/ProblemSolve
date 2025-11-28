#include <iostream>
#include <climits>
using namespace std;

using ll = long long;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    for (int t = 0; t < 3; t++)
    {
        int n;
        cin >> n;
        ll sum = 0;
        int dir = 0;
        for (int i = 0; i < n; i++)
        {
            ll value;
            cin >> value;
            // overflow
            if (sum > 0 && value > 0 && sum > LLONG_MAX - value) dir++;
            else if (sum < 0 && value < 0 && sum < LLONG_MIN - value) dir--;
            sum += value;
        }
        if (dir == 0)
        {
            if (sum == 0) cout << "0\n";
            else if (sum < 0) cout << "-\n";
            else cout << "+ \n";
        }
        else
        {
            if (dir > 0) cout << "+\n";
            else cout << "-\n";
        }
    }
    return 0;
}