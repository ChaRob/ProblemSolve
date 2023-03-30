#include<iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long int k;
    int idx = 60, cnt = 0;
    cin >> k;
    while (k > 1) {
        if ((k > ((long long)1 << idx)) && (k <= ((long long)1 << idx + 1))) {
            cnt++;
            k -= ((long long)1 << idx);
        }
        idx--;
    }
    if (cnt % 2) {
        cout << 1 << "\n";
    }
    else {
        cout << 0 << "\n";
    }
    return 0;
}