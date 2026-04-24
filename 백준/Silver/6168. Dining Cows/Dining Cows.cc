#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> cows(n);
    vector<int> pre(n + 1, 0), sub(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> cows[i];
    }
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] + (cows[i] == 2 ? 1 : 0);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        sub[i] = sub[i + 1] + (cows[i] == 1 ? 1 : 0);
    }
    int minCnt = 1e9;
    for (int i = 0; i <= n; i++)
    {
        minCnt = (minCnt < pre[i] + sub[i]) ? minCnt : pre[i] + sub[i];
    }
    cout << minCnt;
    return 0;
}