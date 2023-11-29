#include <iostream>
#include <queue>
using namespace std;

typedef long long ll;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        priority_queue<ll> heapque;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            heapque.push(-tmp);
        }
        ll res = 0;
        while (heapque.size() != 1) {
            ll a, b;
            a = heapque.top();
            heapque.pop();
            b = heapque.top();
            heapque.pop();
            heapque.push(a + b);
            res += a + b;
        }
        cout << -(res) << "\n";
    }
    return 0;
}