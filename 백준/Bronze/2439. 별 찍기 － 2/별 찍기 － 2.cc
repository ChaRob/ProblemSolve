#include <iostream>
using namespace std;
int main()
{
    int n, j;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        j = 1;
        while (j <= n - i) {
            cout << " ";
            j++;
        }
        while (j <= n) {
            cout << "*";
            j++;
        }
        cout << "\n";
    }
    return 0;
}