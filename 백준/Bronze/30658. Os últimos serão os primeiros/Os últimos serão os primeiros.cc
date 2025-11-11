#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n, team;
    vector<int> teams;
    while (true)
    {
        cin >> n;
        if (n == 0) break;
        for (int i = 0; i < n; i++)
        {
            cin >> team;
            teams.push_back(team);
        }
        for (int i = 0; i < n; i++)
        {
            cout << teams.back() << '\n';
            teams.pop_back();
        }
        cout << "0\n";
    }
    return 0;
}