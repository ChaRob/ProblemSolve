#include <iostream>
using namespace std;

int GetTimeInteger(int h1, int m1, int s1, int h2, int m2, int s2)
{
    int time, h = h1, m = m1, s = s1, cnt = 0;
    while (h != h2 || m != m2 || s != s2)
    {
        time = h * 10000 + m * 100 + s;
        if (time % 3 == 0)
            cnt++;
        s++;
        if (s == 60)
        {
            m++;
            s = 0;
        }
        if (m == 60)
        {
            h++;
            m = 0;
        }
    }
    time = h * 10000 + m * 100 + s;
    if (time % 3 == 0)
        cnt++;
    return cnt;
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    for (int t = 0; t < 3; t++)
    {
        int sh, sm, ss, eh, em, es, cnt = 0;
        char c1, c2;
        cin >> sh >> c1 >> sm >> c2 >> ss;
        cin >> eh >> c1 >> em >> c2 >> es;
        if (sh > eh ||
            (sh == eh && sm > em) ||
            (sh == eh && sm == em && ss > es))
        {
            cnt += GetTimeInteger(sh, sm, ss, 23, 59, 59);
            cnt += GetTimeInteger(0, 0, 0, eh, em, es);
        }
        else
            cnt += GetTimeInteger(sh, sm, ss, eh, em, es);
        cout << cnt << "\n";
    }
    return 0;
}
