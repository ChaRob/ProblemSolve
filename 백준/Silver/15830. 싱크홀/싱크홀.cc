#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double v, w, d, s = 0;
    int cnt = 0;
    cin >> v >> w >> d;
    double t = w / v;
    while (true)
    {
         s += 5 * t * t;
         t *= 1.25;
         if (s >= d)
             break;
         else
             cnt++;
    }
    cout << cnt;
    return 0;
}