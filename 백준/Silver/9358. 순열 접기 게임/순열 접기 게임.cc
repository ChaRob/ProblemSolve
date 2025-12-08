#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;
        vector<int> squence(n);
        for (int i = 0; i < n; i++)
        {
            cin >> squence[i];
        }
        while (n > 2)
        {
            int i = 0, j = n - 1;
            n = ceil((float)n / 2);
            vector<int> newSq;
            while (i <= j)
            {
                newSq.push_back(squence[i++] + squence[j--]);
            }
            squence = newSq;
        }
        cout << "Case #" << t << ": ";
        if (squence[0] > squence[1])
            cout << "Alice\n";
        else
            cout << "Bob\n";
    }
    return 0;
}