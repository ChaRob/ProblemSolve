#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    for (int i = 1; i < numLog.size(); i++)
    {
        int control = numLog[i] - numLog[i - 1];
        if (control == 1)
            answer += 'w';
        else if (control == -1)
            answer += 's';
        else if (control == 10)
            answer += 'd';
        else if (control == -10)
            answer += 'a';
    }
    return answer;
}