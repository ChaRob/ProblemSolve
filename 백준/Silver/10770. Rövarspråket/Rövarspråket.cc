#include <iostream>
using namespace std;

char vovel[5] = { 'a','e','i','o','u' };

bool CheckVovel(char c)
{
    bool check = false;
    for (int i = 0; i < 5; i++)
    {
        if (c == vovel[i])
        {
            check = true;
            break;
        }
    }
    return check;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    while (cin >> c)
    {
        if (CheckVovel(c))
        {
            cout << c;
            continue;
        }
        for (int index = 0; index < 3; index++)
        {
            char ans = c;   
            if (index == 1)
            {
                int dist = 0;
                int minDist = 99;
                for (int i = 0; i < 5; i++)
                {
                    dist = abs(c - vovel[i]);
                    if (minDist > dist)
                    {
                        minDist = dist;
                        ans = vovel[i];
                    }
                }
            }
            else if (index == 2)
            {
                if (ans != 'z')
                {
                    for (int i = (int)c + 1; i <= 'z'; i++)
                    {
                        if (!CheckVovel((char)i))
                        {
                            ans = i;
                            break;
                        }
                    }
                }
            }
            cout << ans;
        }
    }
    return 0;
}