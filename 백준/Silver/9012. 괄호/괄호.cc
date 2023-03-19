#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
    int T;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> T;
    for (int i = 1; i <= T; i++) {
        stack<int> stack_arr;
        char PS[51];
        bool check = true;
        cin >> PS;
        for (int j = 0; j < strlen(PS); j++) {
            if (PS[j] == '(') {
                stack_arr.push(PS[j]);
            }
            else {
                if (stack_arr.empty()) {
                    check = false;
                    break;
                }
                stack_arr.pop();
            }
        }
        if (check && stack_arr.empty()) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}