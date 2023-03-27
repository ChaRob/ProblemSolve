#include<iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, k, cnt = 0, i;
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (cnt == k) {
                break;
            }
        }
    }
    if (cnt == k) {
        cout << i;
    }
    else {
        cout << 0;
    }
    return 0;
}