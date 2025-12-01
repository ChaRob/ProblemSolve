#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string line;
    while (getline(cin, line))
    {
        for (int i = 0; i < line.size(); i++)
        {
            if (line[i] >= 'A' && line[i] <= 'Z')
                line[i] = tolower(line[i]);
        }
        if (line.find("problem") != string::npos)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}