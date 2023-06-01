#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int* A = new int[n];
    vector<int> arr = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (arr[arr.size() - 1] < A[i]) {
            arr.push_back(A[i]);
        }
        else {
            int mid, left = 0, right = arr.size();
            while (left <= right) {
                mid = (left + right) / 2;
                if (arr[mid] < A[i]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
            arr[left] = A[i];
        }
    }

    cout << arr.size() - 1;

    delete[] A;
    return 0;
}