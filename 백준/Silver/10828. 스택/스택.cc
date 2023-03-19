#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
    int n, num;
    char order[10]="";
    stack<int> s;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> order;
        if (strcmp(order,"push") == 0) {
            cin >> num;
            s.push(num);
        }
        else if (strcmp(order, "pop") == 0) {
            if (s.empty()) {
                cout << -1;
            }
            else {
                cout << s.top();
                s.pop();
            }
            cout << "\n";
        }
        else if (strcmp(order, "size") == 0) {
            cout << s.size() << "\n";
        }
        else if (strcmp(order, "empty") == 0) {
            cout << s.empty() << "\n";
        }
        else if (strcmp(order, "top") == 0) {
            if (s.empty()) {
                cout << -1;
            }
            else {
                cout << s.top();
            }
            cout << "\n";
        }
    }

    return 0;
}