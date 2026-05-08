#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    for (int i = c; i <= my_string.size(); i += m)
        answer += my_string[i - 1];
    return answer;
}