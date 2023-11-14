#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << n * 24;

    return 0;
}