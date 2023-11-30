#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    char diff, minDiff = 100;
    for (size_t i = 0; i < b.length() - a.length() + 1; i++)
    {
        diff = 0;
        for (size_t j = 0; j < a.length(); j++)
        {
            if (a[j] != b[i + j]) {
                diff++;
            }
        }
        minDiff = (minDiff < diff) ? minDiff : diff;
    }
    cout << (int)minDiff;
    return 0;
}