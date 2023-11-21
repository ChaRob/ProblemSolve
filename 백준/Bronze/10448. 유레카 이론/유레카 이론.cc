#include <iostream>
using namespace std;

int sum_res[44];

bool Solve(int idx, int cnt, int sum, int target) {
    if (cnt == 3 && sum == target) {
        return true;
    }
    else if (cnt == 3) {
        return false;
    }
    for (int i = idx; i < 44; i++)
    {
        if (Solve(i, cnt + 1, sum + sum_res[i], target)) {
            return true;
        }
    }
    return false;
}

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int k, q;
    cin >> k;
    for (int i = 0; i < 44; i++)
    {
        sum_res[i] = (i + 1) * (i + 2) / 2;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> q;
        if (Solve(0, 0, 0, q)) {
            cout << "1\n";
        }
        else {
            cout << "0\n";
        }
    }
    return 0;
}