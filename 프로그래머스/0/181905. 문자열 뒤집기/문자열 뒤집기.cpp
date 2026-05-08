#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    for (int i = 0; i < my_string.size(); i++)
    {
        if (s <= i && i <= e)
            answer += my_string[e + s - i];
        else
            answer += my_string[i];
    }
    return answer;
}