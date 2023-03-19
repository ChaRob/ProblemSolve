#include <iostream>
using namespace std;
int main()
{
    int num, num_pos, num_max = 0;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    for (int i = 1; i <= 9; i++) {
        cin >> num;
        if (num_max < num) {
            num_max = num;
            num_pos = i;
        }
    }
    cout << num_max << "\n" << num_pos;
    return 0;
}