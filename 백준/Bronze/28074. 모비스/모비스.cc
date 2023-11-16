#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int alpha[26] = {};
    char c;
    while (true)
    {
        cin >> c;
        if (cin.eof()) break;
        alpha[c - 'A']++;
    }
    if (alpha['M' - 'A'] && alpha['O' - 'A'] && 
        alpha['B' - 'A'] && alpha['I' - 'A'] && alpha['S' - 'A']) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}