#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    n *= 1000; m *= 1000;
    if ((n / 100 * 81) <= m)
        cout << "yaho";
    else
        cout << "no";
    return 0;
}