#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, i = 0;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (i >= n - 5) {
            cout << c;
        }
    }

    return 0;
}