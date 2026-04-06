#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct Info
{
    int country;
    int number;
    int score;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<Info> students(n);
    map<int, int> country;
    for (int i = 0; i < n; i++)
    {
        Info& data = students[i];
        cin >> data.country >> data.number >> data.score;
        country[data.country] = 0;
    }
    sort(students.begin(), students.end(), [](Info& a, Info& b) {
        return a.score > b.score;
        });
    int i = 0, cnt = 0;
    while (i < n && cnt < 3)
    {
        int con = students[i].country;
        if (country[con] < 2)
        {
            country[con]++;
            cout << students[i].country << " " << students[i].number << "\n";
            cnt++;
        }
        i++;
    }
    return 0;
}