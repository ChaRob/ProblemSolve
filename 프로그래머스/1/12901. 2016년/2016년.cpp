#include <string>
#include <vector>

using namespace std;

int month[12] = {0,31,29,31,30,31,30,31,31,30,31,30};

string solution(int a, int b) {
    string answer = "";
    int days = b - 1;
    for (int i = 0; i < a; i++)
        days += month[i];
    int dayWeek = days % 7;
    if (dayWeek == 0)
        answer = "FRI";
    else if (dayWeek == 1)
        answer = "SAT";
    else if (dayWeek == 2)
        answer = "SUN";
    else if (dayWeek == 3)
        answer = "MON";
    else if (dayWeek == 4)
        answer = "TUE";
    else if (dayWeek == 5)
        answer = "WED";
    else if (dayWeek == 6)
        answer = "THU";
    return answer;
}