#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, d, m;
    cin >> n >> d;
    for (int i = 0; i < n-1; i++)
    {
        cin >> m;
        int a = d, b = m, r;
        while (true) {
            r = a % b;
            if (r == 0) {
                break;
            }
            a = b;
            b = r;
        }
        cout << d / b << "/" << m / b << "\n";
    }
    return 0;
}