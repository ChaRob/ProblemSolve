#include <iostream>
using namespace std;

int Pow10(int idx)
{
    int val = 1;
    for (int i = 0; i < idx; i++)
    {
        val *= 10;
    }
    return val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, new_n = 0, new_m = 0, ni = 0, mi = 0;
    cin >> n >> m;
    while (n > 0 || m > 0)
    {
        int n1 = n % 10;
        int m1 = m % 10;
        if (n1 >= m1) new_n += n1 * Pow10(ni++);
        if (n1 <= m1) new_m += m1 * Pow10(mi++);

        n /= 10;
        m /= 10;
    }
    if (ni == 0)
        cout << "YODA";
    else
        cout << new_n;
    cout << "\n";
    if (mi == 0)
        cout << "YODA";
    else
        cout << new_m;
    return 0;
}