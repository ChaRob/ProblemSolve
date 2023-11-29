#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    bool suc = true;
    for (int i = 0; i < 8; i++)
    {
        cin >> n;
        if (n == 9) {
            suc = false;
            break;
        }
    }
    if (suc) cout << "S";
    else cout << "F";

    return 0;
}