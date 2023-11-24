#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t, n, maxV, tmp;
    string maxSchool, school;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        maxV = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> school >> tmp;
            if (tmp > maxV) {
                maxSchool = school;
                maxV = tmp;
            }
        }
        cout << maxSchool << "\n";
    }
    return 0;
}