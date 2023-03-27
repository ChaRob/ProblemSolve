#include<iostream>
#include<math.h>
#include<memory.h>
using namespace std;
bool isprime[10000001];
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, i, j;
    memset(isprime, true, sizeof(isprime));
    isprime[0] = false; isprime[1] = false;
    for (i = 2; i < int(sqrt(10000000)) + 1; i++) {
        if (isprime[i]) {
            j = 2;
            while (i * j <= 10000000) {
                isprime[i * j] = false;
                j++;
            }
        }
    }
    cin >>  n;
    i = 2;
    while (n != 1) {
        if (isprime[i] && n % i == 0) {
            n /= i;
            cout << i << "\n";
        }
        else {
            i++;
        }
    }
    return 0;
}