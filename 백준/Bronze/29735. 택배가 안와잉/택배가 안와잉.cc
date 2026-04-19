#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int sh, sm, eh, em, n, t;
    char colon;
    cin >> sh >> colon >> sm >> eh >> colon >> em >> n >> t;
    int nTime = sh * 60 + sm, day = 0, eTime = eh * 60 + em;
    for (int i = 0; i <= n; i++)
    {
        nTime += t;
        if (nTime >= eTime)
        {
            nTime = sh * 60 + sm;
            day++;
            i--;
        }
    }
    int nh = nTime / 60;
    int nm = nTime % 60;
    cout << day << "\n" << setw(2) << setfill('0') << nh << ":" << setw(2) << nm;
    return 0;
}