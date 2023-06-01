#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n, max_length = 0;
    cin >> n;
    int* A = new int[n];
    int* left = new int[n];
    int* right = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        left[i] = 1;
        for (int j = i; j >= 0; j--)
        {
            if (A[i] > A[j] && left[i] <= left[j]) {
                left[i] = left[j] + 1;
            }
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        right[i] = 1;
        for (int j = i; j < n; j++)
        {
            if (A[i] > A[j] && right[i] <= right[j]) {
                right[i] = right[j] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        max_length = (max_length > left[i] + right[i] - 1) ? max_length : left[i] + right[i] - 1;
    }

    cout << max_length;

    delete[] A, left, right;
    return 0;
}