#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float m, a, plane = 0;
    int n;
    cin >> m >> n >> a;
    for (int i = 0; i < n; i++)
    {
        float psg;
        cin >> psg;
        plane += psg;
    }
    plane += m;
    if (a == 1000)
        cout << "Impossible";
    else
        cout << fixed << setprecision(6) << (plane * a) / (1000 - a);
    return 0;
}