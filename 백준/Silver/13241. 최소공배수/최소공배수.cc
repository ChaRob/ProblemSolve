#include <iostream>
using namespace std;

typedef long long ll;

ll GCD(ll a, ll b) {
    ll tmp;
    while (true) {
        tmp = a % b;
        if (tmp == 0) break;
        a = b;
        b = tmp;
    }
    return b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    ll a, b;
    cin >> a >> b;
    ll gcd = GCD(a,b);
    cout << a * b / gcd;
    return 0;
}