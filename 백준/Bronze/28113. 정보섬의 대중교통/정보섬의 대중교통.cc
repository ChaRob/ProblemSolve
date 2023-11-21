#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;
    if (n + b - n == a) {
        cout << "Anything";
    }
    else if (n + b - n < a) {
        cout << "Subway";
    }
    else {
        cout << "Bus";
    }
    return 0;
}