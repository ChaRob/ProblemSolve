#include <iostream>
#include <set>
using namespace std;

using ll = long long;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll tmp = n;
    set<ll> primes;
    for (ll i = 2; i * i <= n; i++)
    {
        if (tmp % i == 0)
        {
            primes.insert(i);
            while (tmp % i == 0) tmp /= i;
        }
    }
    if (tmp != 1) primes.insert(tmp);
    ll res = n;
    for (auto it = primes.begin(); it != primes.end(); it++)
    {
        res -= res / (*it);
    }
    cout << res;
    return 0;
}
