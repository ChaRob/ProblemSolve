#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    float w, h;
    cin >> w >> h;
    cout << fixed << setprecision(1) << w * h / 2.0f;

    return 0;
}