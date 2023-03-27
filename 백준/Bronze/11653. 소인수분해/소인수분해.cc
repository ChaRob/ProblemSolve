#include<iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, i;
    cin >>  n;
    i = 2;
    while (n != 1) {
        if (n % i == 0) {
            n /= i;
            cout << i << "\n";
        }
        else {
            i++;
        }
    }
    return 0;
}