#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, cnt = 0;
    cin >> n;
    if (n < 10) {
        cnt = n;
    }
    else {
        int idx = 1;
        cnt = 9;
        while (n >= pow(10, idx)) {
            if (n < pow(10, idx + 1)) {
                cnt += (idx + 1) * (n - pow(10, idx) + 1);
                break;
            }
            else {
                cnt += (idx + 1) * (pow(10, idx + 1) - pow(10, idx));
            }
            idx++;
        }
    }
    cout << cnt;

    return 0;
}