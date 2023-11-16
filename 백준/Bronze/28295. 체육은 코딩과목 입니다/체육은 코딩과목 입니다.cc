#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int dir = 0, input;
    for (int i = 0; i < 10; i++)
    {
        cin >> input;
        switch (input)
        {
        case 1:
            dir = (dir + 1) % 4;
            break;
        case 2:
            dir = (dir + 2) % 4;
            break;
        case 3:
            dir = (dir - 1 >= 0) ? dir - 1 : 3;
            break;
        }
    }
    char result;
    switch (dir)
    {
    case 0:
        result = 'N';
        break;
    case 1:
        result = 'E';
        break;
    case 2:
        result = 'S';
        break;
    case 3:
        result = 'W';
        break;
    }
    cout << result;

    return 0;
}