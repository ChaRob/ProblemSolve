#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for (char c : myString)
    {
        if (c < 'l')
            c = 'l';
        answer.push_back(c);
    }
    return answer;
}