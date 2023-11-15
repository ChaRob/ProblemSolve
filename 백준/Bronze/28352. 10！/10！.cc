#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    long long result = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    cout << result / (static_cast<long long>(60 * 60 * 24) * 7);

    return 0;
}