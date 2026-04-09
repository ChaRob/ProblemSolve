#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> coding(2 * n);
    for (int i = 0; i < 2*n; i++)
    {
        cin >> coding[i];
    }
    sort(coding.begin(), coding.end());
    int minS = 1e9;
    for (int i = 0; i < n; i++)
    {
        int s = coding[i] + coding[2 * n - 1 - i];
        minS = (minS < s) ? minS : s;
    }
    cout << minS;
    return 0;
}