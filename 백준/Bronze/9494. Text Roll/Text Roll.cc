#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    while (true)
    {
        int n;
        cin >> n;
        cin.ignore();
        if (n == 0)
            break;

        int col = 0;
        string input;
        bool started = false;
        for (int i = 0; i < n; i++)
        {
            getline(cin, input);
            if (!started)
            {
                bool hasLetter = false;
                for (int j = 0; j < input.size(); j++)
                {
                    if (input[j] != ' ')
                    {
                        col = j;
                        started = true;
                        hasLetter = true;
                        break;
                    }
                }
                if (!hasLetter)
                    continue;
            }
            bool found = false;
            for (int j = col; j < input.size(); j++)
            {
                if (input[j] == ' ')
                {
                    found = true;
                    col = j;
                    break;
                }
            }
            if (!found && col < input.size())
                col = input.size();
        }
        if (!started)
            cout << 1 << "\n";
        else
            cout << col + 1 << "\n";
    }
    return 0;
}