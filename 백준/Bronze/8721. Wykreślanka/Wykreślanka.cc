#include <iostream>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int num, cnt = 0, target = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num != target) cnt++;
        else target++;
    }
    cout << cnt;
    return 0;
}