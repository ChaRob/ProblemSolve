#include <string>
#include <vector>

using namespace std;

bool HasThree(int i)
{
    while (i > 0)
    {
        int tmp = i % 10;
        if (tmp == 3)
            return true;
        i /= 10;
    }
    return false;
}

int solution(int n) {
    int answer = 0, cnt = 0;
    for (int i = 1; cnt < n; i++)
    {
        if (HasThree(i) == false && i % 3 != 0)
        {
            answer = i;
            cnt++;
        }
    }
    return answer;
}