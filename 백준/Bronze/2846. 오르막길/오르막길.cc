#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    short* height = new short[n];
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    short maxheight = 0, acc = 0;

    for (int i = 1; i < n; i++)
    {
        if (height[i - 1] < height[i]) {
            acc += height[i] - height[i - 1];
            maxheight = (maxheight > acc) ? maxheight : acc;
        }
        else {
            acc = 0;
        }
    }
    cout << maxheight;
    return 0;
}