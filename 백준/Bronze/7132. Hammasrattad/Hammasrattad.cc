#include <iostream>
using namespace std;

bool IsVisited[1001][1001];

int Gcd(int a, int b)
{
    while (b > 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int m, n, cnt = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int gcd = Gcd(i, j);
            int a = i / gcd;
            int b = j / gcd;
            if (!IsVisited[a][b])
            {
                IsVisited[a][b] = true;
                cnt++;
                if (a < b)
                    cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}