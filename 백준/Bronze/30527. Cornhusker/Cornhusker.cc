#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vector<pair<int, int>> corns;
    for (int i = 0; i < 5; i++)
    {
        int a, l;
        cin >> a >> l;
        corns.push_back({ a,l });
    }
    int n, kwf, ans = 0;
    cin >> n >> kwf;
    for (int i = 0; i < 5; i++)
    {
        ans += (corns[i].first * corns[i].second);
    }
    cout << ans / 5 * n / kwf;
    return 0;
}