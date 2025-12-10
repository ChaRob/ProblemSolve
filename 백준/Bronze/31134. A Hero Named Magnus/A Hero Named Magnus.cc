#include <iostream>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        long long x;
        cin >> x;
        cout << 2 * x - 1 << "\n";
    }
    return 0;
}