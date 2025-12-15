#include <iostream>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n, cnt = 0;
    cin >> n;
    long long lastVal = 999999, accum = 0;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        if (lastVal > data)
            accum = 0;
        else
            accum++;
        cnt += accum + 1;
        lastVal = data;
    }
    cout << cnt;
    return 0;
}