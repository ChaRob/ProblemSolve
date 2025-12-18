#include <iostream>
#include <vector>
#include <string>
using namespace std;

using ll = long long;

ll CountSeatCase(const string& seats, int k)
{
    ll cnt = 0, con = 0;
    for (int i = 0; i < seats.size(); i++)
    {
        if (seats[i] == '1')
            con = 0;
        else
        {
            con++;
            if (con >= k)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, m, k;
    ll cnt = 0;
    cin >> n >> m >> k;
    string seats;
    for (int i = 0; i < n; i++)
    {
        cin >> seats;
        cnt += CountSeatCase(seats, k);
    }
    cout << cnt;
    return 0;
}