#include <iostream>
using namespace std;
int main()
{
    int n, num, num_min = 1000000, num_max = -1000000;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num_min > num) {
            num_min = num;
        }
        if (num_max < num) {
            num_max = num;
        }
    }
    cout << num_min << " " << num_max;
    return 0;
}