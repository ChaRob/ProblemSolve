#include <iostream>
#include <set>
using namespace std;

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a_num, b_num, num, cnt = 0;
    cin >> a_num >> b_num;

    set<int> a, b;
    for (int i = 0; i < a_num; i++)
    {
        cin >> num;
        a.insert(num);
    }
    for (int i = 0; i < b_num; i++)
    {
        cin >> num;
        b.insert(num);
        if (a.find(num) == a.end()) {
            cnt++;
        }
    }
    for (const auto& element : a)
    {
        if (b.find(element) == b.end()) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}