#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string numStr = "";
    while (num > 0)
    {
        int d = num % 10;
        numStr.push_back('0' + d);
        num /= 10;
    }
    for (int i = 0; i < numStr.size(); i++)
    {
        if (numStr[numStr.size() - 1 - i] - '0' == k)
        {
            answer = i + 1;
            break;
        }
    }
    return answer;
}