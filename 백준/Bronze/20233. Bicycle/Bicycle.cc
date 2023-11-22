#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, x, b, y, t;
    cin >> a >> x >> b >> y >> t;
    int first = (t > 30) ? (t - 30) * x : 0;
    int second = (t > 45) ? (t - 45) * y : 0;
    cout << a+first*21 << " " << b+second*21;

    return 0;
}