#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int score[2] = { 0, 0 };
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'D') score[0]++;
        else if (c == 'P') score[1]++;
        
        if (abs(score[0] - score[1]) >= 2) break;
    }
    cout << score[0] << ":" << score[1];

    return 0;
}