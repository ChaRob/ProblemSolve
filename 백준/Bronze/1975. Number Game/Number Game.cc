#include <iostream>
#include <algorithm>
using namespace std;

int memory[1001];

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    fill(begin(memory), end(memory), -1);
    for (int t = 0; t < T; t++)
    {
        int n, cnt = 0;
        cin >> n;
        if (memory[n] == -1)
        {
            for (int i = 2; i <= n; i++)
            {
                int r = n;
                while (r % i == 0)
                {
                    r /= i;
                    cnt++;
                }
            }
            memory[n] = cnt;
        }
        cout << memory[n] << "\n";
    }
    return 0;
}