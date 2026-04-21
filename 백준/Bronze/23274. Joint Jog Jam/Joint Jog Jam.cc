#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float ksx, ksy, osx, osy, kex, key, oex, oey;
    cin >> ksx >> ksy >> osx >> osy >> kex >> key >> oex >> oey;
    float sd = sqrt(pow(ksx - osx, 2) + pow(ksy - osy, 2));
    float ed = sqrt(pow(kex - oex, 2) + pow(key - oey, 2));
    cout << fixed << setprecision(6) << ((sd > ed) ? sd : ed);
    return 0;
}