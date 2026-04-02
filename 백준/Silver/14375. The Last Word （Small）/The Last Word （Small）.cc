#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        string input, ans;
        cin >> input;
        for (auto c : input)
        {
            if (ans.size() > 0)
            {
                if (ans.front() <= c)
                    ans = c + ans;
                else
                    ans.push_back(c);
            }
            else
                ans.push_back(c);
        }
        cout << "Case #" << t << ": " << ans << "\n";
    }
    return 0;
}