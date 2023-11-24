#include <iostream>
using namespace std;

int GCD(int a, int b) {
    int tmp;
    while (true) {
        tmp = a % b;
        if (tmp == 0)break;
        a = b;
        b = tmp;
    }
    return b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a, b, c, d, up, down, tmp;
    cin >> a >> b >> c >> d;
    up = a * d + b * c;
    down = b * d;
    tmp = GCD(down, up);
    cout << up / tmp << " " << down / tmp;

    return 0;
}