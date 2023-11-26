#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c) {
            vec.push_back(10000 + a * 1000);
        }
        else if (a == b || a == c) {
            vec.push_back(1000 + a * 100);
        }
        else if (b == c) {
            vec.push_back(1000 + b * 100);
        }
        else {
            int tmp = (a > b) ? a : b;
            tmp = (tmp > c) ? tmp : c;
            vec.push_back(100 * tmp);
        }
    }
    sort(vec.begin(), vec.end());
    cout << vec.back();

    return 0;
}