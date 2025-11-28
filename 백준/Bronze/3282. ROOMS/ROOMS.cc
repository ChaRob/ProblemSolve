#include <iostream>
using namespace std;

int rooms[101];

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, g;
    cin >> n >> g;
    for (int i = 0; i < g; i++)
    {
        int group;
        cin >> group;
        for (int j = 1; j <= n; j++)
        {
            if (group >= 2 && rooms[j] == 0)
            {
                group -= 2;
                rooms[j] = 2;
            }
            else if (group == 1 && rooms[j] == 0)
            {
                group--;
                rooms[j] = 1;
            }
        }
        if (group > 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (group >= 1 && rooms[j] < 2)
                {
                    group--;
                    rooms[j]++;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << rooms[i] << "\n";
    }
    return 0;
}