#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (char c : my_string)
    {
        if (c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e')
            continue;
        answer += c;
    }
    return answer;
}