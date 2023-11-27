#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    char pre, now;
    short dist = 10;
    cin >> pre;
    while (cin >> now) {
        if (now != pre) dist += 10;
        else dist += 5;
        pre = now;
    }
    cout << dist;
    return 0;
}