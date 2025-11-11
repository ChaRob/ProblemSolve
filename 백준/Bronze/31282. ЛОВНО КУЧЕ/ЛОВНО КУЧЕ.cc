#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    float n, m, k;
    cin >> n >> m >> k;
    cout << ceil(n / (k - m));
    return 0;
}