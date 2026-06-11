#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (char c : rsp)
    {
        if (c == '0')
            answer.push_back('5');
        else if (c == '2')
            answer.push_back('0');
        else if (c == '5')
            answer.push_back('2');
    }
    return answer;
}