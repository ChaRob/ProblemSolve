#include <iostream>
#include <unordered_set>
#include <string.h>
using namespace std;

int cnt;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s, sub;
    unordered_set<string> subMap;
    cin >> s;

    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 0; j < s.size() - i + 1; j++)
        {
            sub = s.substr(j, i);
            auto result = subMap.insert(sub);
            if (result.second) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}