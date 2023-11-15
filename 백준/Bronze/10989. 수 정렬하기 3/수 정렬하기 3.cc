#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int num[10001] = { 0 };
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        num[tmp]++;
    }
    for (int i = 0; i <= 10000; i++)
    {
        while (num[i] != 0) {
            cout << i << "\n";
            num[i]--;
        }
    }

    return 0;
}