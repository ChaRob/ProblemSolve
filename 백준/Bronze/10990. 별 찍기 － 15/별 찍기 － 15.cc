#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 0) {
            for (int j = 0; j < 2*i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}