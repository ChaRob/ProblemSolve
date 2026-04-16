#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (char c : str)
    {
        if (c >= 'a')
            c = 'A' + (c - 'a');
        else
            c = 'a' + (c - 'A');
        cout << c;
    }
    return 0;
}