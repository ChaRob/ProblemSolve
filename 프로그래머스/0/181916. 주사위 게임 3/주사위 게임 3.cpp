#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    int count[7] = {};
    vector<int> vec = { a,b,c,d };
    for (int value : vec)
    {
        count[value]++;
    }
    int four = 0, three = 0;
    vector<int> two, one;
    for (int i = 1; i <= 6; i++)
    {
        if (count[i] == 4)
            four = i;
        else if (count[i] == 3)
            three = i;
        else if (count[i] == 2)
            two.push_back(i);
        else if (count[i] == 1)
            one.push_back(i);
    }
    if (four > 0)
        answer = 1111 * four;
    else if (three > 0)
    {
        answer = 10 * three + one[0];
        answer *= answer;
    }
    else if (two.size() == 2)
        answer = (two[0] + two[1]) * abs(two[0] - two[1]);
    else if (two.size() == 1)
        answer = one[0] * one[1];
    else
        answer = *min_element(vec.begin(), vec.end());
    return answer;
}