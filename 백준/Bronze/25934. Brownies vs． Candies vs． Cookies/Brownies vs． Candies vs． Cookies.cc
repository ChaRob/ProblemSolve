#include <iostream>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int t = 1; t <= n; t++)
    {
        int s, b, m;
        cin >> s >> b >> m;
        cout << "Practice #" << t << ": " << s << " " << b << "\n";
        for (int i = 0; i < m; i++)
        {
            int sg;
            cin >> sg;
            while (b <= sg) b *= 2;
            b -= sg;
            cout << sg << " " << b << "\n";
        }
        cout << "\n";
    }
    return 0;
}
