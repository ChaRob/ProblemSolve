#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    
    if (n <= 60 + k) {
        cout << 1500 * n;
    }
    else {
        cout << 1500 * (k + 60) + 3000 * (n - 60 - k);
    }
    return 0;
}