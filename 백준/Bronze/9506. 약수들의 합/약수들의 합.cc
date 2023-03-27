#include<iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, sum;
    while (1) {
        cin >> n;
        if (n == -1) {
            break;
        }
        bool isdivisor[100000] = {false};
        sum = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
                isdivisor[i] = true;
            }
        }
        cout << n;
        if (sum == n) {
            cout << " = " << 1;
            for (int i = 2; i < n; i++) {
                if (isdivisor[i]) {
                    cout << " + " << i;
                }
            }
            cout << "\n";
        }
        else {
            cout << " is NOT perfect.\n";
        }
    }

    return 0;
}