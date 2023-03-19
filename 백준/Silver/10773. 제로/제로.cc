#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int k, num;
    stack<int> stack_arr;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> k;
    for (int i = 1; i <= k; i++) {
        cin >> num;
        if (num == 0) {
            stack_arr.pop();
        }
        else {
            stack_arr.push(num);
        }
    }
    int sum = 0;
    while (!stack_arr.empty()) {
        sum += stack_arr.top();
        stack_arr.pop();
    }
    cout << sum;
    return 0;
}