#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T;
    long long N;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << N * N << "\n";
    }

    return 0;
}