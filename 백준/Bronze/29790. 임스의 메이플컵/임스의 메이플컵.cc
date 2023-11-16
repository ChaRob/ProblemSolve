#include <iostream>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int problem, Union, highestlevel;
    cin >> problem >> Union >> highestlevel;
    if (problem >= 1000) {
        if (Union >= 8000 || highestlevel >= 260) {
            cout << "Very Good";
        }
        else {
            cout << "Good";
        }
    }
    else {
        cout << "Bad";
    }

    return 0;
}