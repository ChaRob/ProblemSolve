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
        if (i % 2 == 1) {
            cout << " ";
        }

        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}