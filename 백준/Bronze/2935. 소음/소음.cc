#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    string first, second, result = "";
    char oper;
    cin >> first >> oper >> second;
    if (oper == '*') {
        result = first + second.substr(1, second.length() - 1);
    }
    else if (oper == '+') {
        if (first.length() > second.length()) {
            result = first;
            result[first.length() - second.length()] = '1';
        }
        else if (first.length() < second.length()) {
            result = second;
            result[second.length() - first.length()] = '1';
        }
        else {
            result = first;
            result[0] = '2';
        }
    }
    cout << result;
    return 0;
}