#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (c * e - b * f) / (a * e - b * d) << " " << (c * d - a * f) / (b * d - a * e);

    return 0;
}