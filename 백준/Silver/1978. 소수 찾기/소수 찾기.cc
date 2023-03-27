#include<iostream>
#include<math.h>
#include<memory.h>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, i, j, cnt = 0;
    bool isprime[1001];
    memset(isprime, true, sizeof(isprime));
    isprime[0] = false; isprime[1] = false;
    for (i = 2; i < int(sqrt(1000)) + 1; i++) {
        if (isprime[i]) {
            j = 2;
            while (i * j <= 1000) {
                isprime[i * j] = false;
                j++;
            }
        }
    }
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> j;
        if (isprime[j]) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}