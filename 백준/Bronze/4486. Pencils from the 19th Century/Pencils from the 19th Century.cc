#include <iostream>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n;
    int caseIndex = 1;

    while (cin >> n)
    {
        if (n == 0) break;

        cout << "Case " << caseIndex++ << ":\n";
        cout << n << " pencils for " << n << " cents\n";

        bool found = false;

        for (int x = 1; x <= n; ++x)
        {
            int y = 3 * n - 15 * x;
            int z = 14 * x - 2 * n;

            if (y >= 1 && z >= 1)
            {
                found = true;
                cout << x << " at four cents each\n";
                cout << y << " at two for a penny\n";
                cout << z << " at four for a penny\n\n";
            }
        }

        if (!found)
        {
            cout << "No solution found.\n\n";
        }
    }

    return 0;
}
