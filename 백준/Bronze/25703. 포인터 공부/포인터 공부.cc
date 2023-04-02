#include<iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << "int a;\n";
    if (n >= 1) {
        cout << "int *ptr = &a;\n";
    }
    for (int i = 2; i <= n; i++)
    {
        cout << "int ";
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "ptr" << i << " = &ptr";
        if (i != 2) {
            cout << i - 1;
        }
        cout << ";\n";
    }
    return 0;
}