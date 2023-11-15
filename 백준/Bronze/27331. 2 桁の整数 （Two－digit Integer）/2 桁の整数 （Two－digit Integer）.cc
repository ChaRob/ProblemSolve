#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    for (int i = 0; i < 2; i++)
    {
        cin >> n;
        cout << n;
    }

    return 0;
}