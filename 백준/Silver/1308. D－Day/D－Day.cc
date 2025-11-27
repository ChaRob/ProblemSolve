#include <iostream>
using namespace std;

bool IsLeapYear(int _year)
{
    if (_year % 400 == 0) return true;
    if (_year % 100 == 0) return false;
    if (_year % 4 == 0) return true;
    return false;
}

int GetTotalDay(int _year, int _month, int _day)
{
    int total = 0;
    int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    for (int year = 1; year < _year; year++)
        total += IsLeapYear(year) ? 366 : 365;
    if (IsLeapYear(_year))
        monthDays[2] = 29;

    for (int month = 1; month < _month; month++)
        total += monthDays[month];

    total += _day;
    return total;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int ny, nm, nd, dy, dm, dd;
    cin >> ny >> nm >> nd;
    cin >> dy >> dm >> dd;
    if (dy > ny + 1000 ||
        (dy == ny + 1000 && dm > nm) ||
        (dy == ny + 1000 && dm == nm && dd >= nd))
    {
        cout << "gg";
    }
    else
    {
        int tdn = GetTotalDay(ny, nm, nd);
        int tdd = GetTotalDay(dy, dm, dd);
        cout << "D-" << tdd - tdn;
    }
    return 0;
}