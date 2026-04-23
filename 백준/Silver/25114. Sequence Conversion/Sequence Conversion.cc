#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (a[i] == b)
            continue;

        int bitwise = a[i] ^ b;
        if (i < n - 1)
            a[i + 1] ^= bitwise;
        if (i == n - 1 && a[i] != b)
        {
            cnt = -1;
            break;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}