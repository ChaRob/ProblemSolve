#include <iostream>
using namespace std;

int stack[1000000];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, idx = -1, order, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> order;
        switch (order)
        {
        case 1:
            cin >> x;
            idx++;
            stack[idx] = x;
            break;
        case 2:
            if (idx >= 0) {
                cout << stack[idx] << "\n";
                idx--;
            }
            else {
                cout << -1 << "\n";
            }
            break;
        case 3:
            cout << idx + 1 << "\n";
            break;
        case 4:
            if (idx >= 0) {
                cout << 0 << "\n";
            }
            else {
                cout << 1 << "\n";
            }
            break;
        case 5:
            if (idx >= 0) {
                cout << stack[idx] << "\n";
            }
            else {
                cout << -1 << "\n";
            }
            break;
        default:
            break;
        }
    }

    return 0;
}