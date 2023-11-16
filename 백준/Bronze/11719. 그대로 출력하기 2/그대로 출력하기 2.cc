#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string s;
    while (true) {
        if (cin.eof()) break;
        getline(cin, s);
        cout << s << "\n";
    }

    return 0;
}