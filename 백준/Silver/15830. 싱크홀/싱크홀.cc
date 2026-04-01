#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double v, w, d, s = 0;
    int cnt = 0;
    cin >> v >> w >> d;
    while (true)
    {
         double t = w / v;
         v *= 0.8;
         s += 5 * t * t;
         if (s >= d)
             break;
         else
             cnt++;
    }
    cout << cnt;
    return 0;
}