#include <iostream>
using namespace std;

short dp[1000];

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int* A = new int[n];
    short maxV = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        dp[i] = 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j]) {
                dp[j] = (dp[i] + 1 > dp[j]) ? dp[i] + 1 : dp[j];
                maxV = (maxV > dp[j]) ? maxV : dp[j];
            }
        }
    }
    cout << maxV;
    delete[] A;
    return 0;
}