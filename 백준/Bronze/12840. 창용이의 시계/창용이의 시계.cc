#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int h, m, s, q, totalS = 0;
    cin >> h >> m >> s >> q;
    totalS = (h * 60 + m) * 60 + s;
    for (int i = 0; i < q; i++)
    {
        int t, c;
        cin >> t;
        if (t == 3)
        {
            m = totalS / 60;
            s = totalS % 60;
            h = m / 60;
            m %= 60;
            cout << h << " " << m << " " << s << "\n";
            continue;
        }
        cin >> c;
        if (t == 1)
            totalS += c;
        else
            totalS -= c;
        if (abs(totalS) > 86400)
            totalS %= 86400;
        if (totalS < 0)
            totalS += 86400;
    }
    return 0;
}