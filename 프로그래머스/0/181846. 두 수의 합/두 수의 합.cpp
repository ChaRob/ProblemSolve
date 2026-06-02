#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int idx = 0, up = 0;
    while (a.size() > 0 && b.size() > 0)
    {
        int ai = a.back() - '0';
        a.pop_back();
        int bi = b.back() - '0';
        b.pop_back();

        int r = ai + bi + up;
        up = 0;
        if (r >= 10)
        {
            r -= 10;
            up = 1;
        }
        answer.push_back(r + '0');
    }
    while (a.size() > 0)
    {
        int r = a.back() - '0' + up;
        a.pop_back();
        up = 0;
        if (r >= 10)
        {
            r -= 10;
            up = 1;
        }
        answer.push_back(r + '0');
    }
    while (b.size() > 0)
    {
        int r = b.back() - '0' + up;
        b.pop_back();
        up = 0;
        if (r >= 10)
        {
            r -= 10;
            up = 1;
        }
        answer.push_back(r + '0');
    }
    if (up == 1)
        answer.push_back('1');
    reverse(answer.begin(), answer.end());
    return answer;
}