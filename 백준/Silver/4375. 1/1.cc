#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    while (cin >> n)
    {
        int ans = 1 % n;
        int cnt = 1;
        while (ans != 0)
        {
            ans = (ans * 10 + 1) % n;
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}