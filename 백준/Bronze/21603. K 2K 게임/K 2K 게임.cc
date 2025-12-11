#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vector<int> ans;
    int n, k, cnt = 0;
    cin >> n >> k;
    int k1 = k % 10, k2 = (2 * k) % 10;
    for (int i = 1; i <= n; i++)
    {
        int x = i % 10;
        if (x != k1 && x != k2)
        {
            ans.push_back(i);
            cnt++;
        }
    }
    cout << cnt << '\n';
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}