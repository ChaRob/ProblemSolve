#include<iostream>
#include<math.h>
#include<memory.h>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int m, n, i, j, minv, sum = 0;
    bool isprime[10001];
    memset(isprime, true, sizeof(isprime));
    isprime[0] = false; isprime[1] = false;
    for (i = 2; i < int(sqrt(10000)) + 1; i++) {
        if (isprime[i]) {
            j = 2;
            while (i * j <= 10000) {
                isprime[i * j] = false;
                j++;
            }
        }
    }
    cin >> m >> n;
    for (i = m; i <= n; i++) {
        if (isprime[i]) {
            if (sum == 0) {
                minv = i;
            }
            sum+=i;
        }
    }
    if (sum == 0) {
        cout << -1;
    }
    else {
        cout << sum << "\n" << minv;
    }
    return 0;
}