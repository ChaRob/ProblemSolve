#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (char c : my_string)
    {
        if (c >= 'a')
            answer.push_back('A' + (c - 'a'));
        else
            answer.push_back('a' + (c - 'A'));
    }
    return answer;
}