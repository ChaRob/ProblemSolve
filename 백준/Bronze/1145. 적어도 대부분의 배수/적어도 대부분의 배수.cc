#include <iostream>
using namespace std;

int GCD(int a, int b) {
    int tmp;
    while (true) {
        tmp = a % b;
        if (tmp == 0) break;
        a = b;
        b = tmp;
    }
    return b;
}

int LCD(int a, int b) {
    int gcd = GCD(a, b);
    return a * b / gcd;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
    }
    int minRes = 1000000;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                int res = LCD(n[i], n[j]);
                res = LCD(res, n[k]);
                minRes = (minRes < res) ? minRes : res;
            }
        }
    }
    cout << minRes;
    return 0;
}