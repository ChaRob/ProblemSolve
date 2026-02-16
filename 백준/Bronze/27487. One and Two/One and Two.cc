#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int n, cnt = 0, minK = 1;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 2)
            {
                cnt++;
                vec.push_back(i);
            }
        }
        if (cnt % 2)
            minK = -1;
        else if (cnt > 0)
        {
            minK = vec[(cnt - 1) / 2] + 1;
        }
		cout << minK << "\n";
    }
    return 0;
}
