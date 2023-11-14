#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int num[10] = { 0 };
    for (int i = 0; i < 5; i++)
    {
        int tmp;
        cin >> tmp;
        num[tmp]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i]%2 == 1) {
            cout << i;
            break;
        }
    }

    return 0;
}