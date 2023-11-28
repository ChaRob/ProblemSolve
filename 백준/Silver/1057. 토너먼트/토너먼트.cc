#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, a, b;
    int cnt = 0;
    cin >> n >> a >> b;
    while (a != b) {
        if ((a & (1 << 0)) == 1) {
            a++;
        }
        a /= 2;
        if ((b & (1 << 0)) == 1) {
            b++;
        }
        b /= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}