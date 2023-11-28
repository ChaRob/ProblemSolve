#include <iostream>
using namespace std;

long long compare(const long long& a, const long long& b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long a, b, c, result;
        cin >> a >> b >> c;
        result = compare((a + b) * (a + b) + c * c, (a + c) * (a + c) + b * b);
        result = compare(result, (b + c) * (b + c) + a * a);
        cout << result << "\n";
    }
    return 0;
}