#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, m;
        cin >> n >> m;
        cout << (n - m) * m + 1 << "\n";
    }
    return 0;
}